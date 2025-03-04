* Encoding: UTF-8.
* Encoding: .



FILTER BY Keep.
FILTER OFF.

SELECT IF Keep=1.

************************************************************************************************************************************.
************************************************************************************************************************************.
******************************************** DATASET COMBINING  *************************************************.
************************************************************************************************************************************.
************************************************************************************************************************************.
*DATASET COMBINING.
*_____.

*When starting with SPSS files that were freshly downloaded from Qualtrics.

*Opened College sample, then Mturk.
*Started with College; Merge files --> ADD CASES; included all the variables
and indicated source as variable "Sample":.

DATASET ACTIVATE DataSet1.
ADD FILES /FILE=*
  /FILE='DataSet2'
  /IN=Sample.
VARIABLE LABELS Sample
 'Case source is DataSet2'.
EXECUTE.

*Should be 668 cases if starting from scratch.

*SAVING THE FILE.
*CAREFUL!!!!!!! Be sure to check the name; if the name is the same 
as an already existing dataset, it will overwrite it without warning.

*SAVE OUTFILE='/Users/admin/Downloads/DissP2.sav'
  /COMPRESSED.













************************************************************************************************************************************.
************************************************************************************************************************************.
********************************************  INITIAL VARIABLE CLEANING  *************************************************.
************************************************************************************************************************************.
************************************************************************************************************************************.
*VARIABLE CLEANING.
*_____.

VARIABLE WIDTH   Finished RecordedDate ResponseId
    LocationLatitude LocationLongitude DistributionChannel (1)
 / Duration__in_seconds_  UserLanguage(10).

DELETE VARIABLES 
RecipientLastName TO UserLanguage.

DELETE VARIABLES 
he_she_they
him_her_them
His_Her_Their
He_She_They.0
is_is_are
s_s_
has_has_have
his_her_their.0.


RENAME VARIABLES 
(SC1=Bdes) (SC2=HYHDes) (SC3=HYLDes) (SC4=HNHDes) (SC5=HNLDes)
(SC6=LYHDes) (SC7=LYLDes) (SC8=LNHDes) (SC9=LNLDes) (SC10=AttnChks).



RENAME VARIABLES
(FL_14_DO_FL_42=Order1)
(FL_14_DO_FL_44=Order2)
(FL_14_DO_FL_45=Order3)
(FL_14_DO_FL_46=Order4)
(FL_14_DO_FL_47=Order5)
(FL_14_DO_FL_48=Order6)
(FL_14_DO_FL_49=Order7)
(FL_14_DO_FL_50=Order8)
(FL_14_DO_FL_51=Order9)
(FL_14_DO_FL_52=Order10)
(FL_14_DO_FL_53=Order11)
(FL_14_DO_FL_54=Order12)
(FL_14_DO_FL_55=Order13)
(FL_14_DO_FL_56=Order14)
(FL_14_DO_FL_57=Order15)
(FL_14_DO_FL_58=Order16).

VARIABLE LABELS 
PANAS_1 'PANAS_1 Enthusiastic'
PANAS_2 'PANAS_2 Distressed'
PANAS_3 'PANAS_3 Interested'
PANAS_4 'PANAS_4 Upset'
PANAS_5 'PANAS_5 Determined'
PANAS_6 'PANAS_6 Hostile'
PANAS_7 'PANAS_7 Irritable'
PANAS_8 'PANAS_8 Alert'
PANAS_9 'PANAS_9 Nervous'
PANAS_10 'PANAS_10 Attentive'
TIPI_1 'TIPI_1 Extraverted'
TIPI_2 'TIPI_2 Critical'
TIPI_3 'TIPI_3 Dependable'
TIPI_4 'TIPI_4 Anxious'
TIPI_5 'TIPI_5 Open'
TIPI_6 'TIPI_6 Reserved'
TIPI_7 'TIPI_7 Sympathetic'
TIPI_8 'TIPI_8 Disorganized'
TIPI_9 'TIPI_9 Calm'
TIPI_10 'TIPI_10 Conventional'
ECR_1 'ECR_1'
ECR_2 'ECR_2'
ECR_3 'ECR_3'
ECR_4 'ECR_4'
ECR_5 'ECR_5'
ECR_6 'ECR_6'
ECR_7 'ECR_7'
ECR_8 'ECR_8'
ECR_9 'ECR_9'
ECR_10 'ECR_10'
ECR_11 'ECR_11'
ECR_AttChk 'ECR_AttnChk'
ECR_12 'ECR_12'
SexpPos 'Positive Sexual Expectations'
SexpNeg 'Negative Sexual Expectations'
Sexp_1 'Sexp_1 Emotional Intimacy'
Sexp_2 'Sexp_2 Orgasm'
Sexp_3 'Sexp_3 Physical Discomfort'
Sexp_4 'Sexp_4 Sexual Pleasure'
Sexp_5 'Sexp_5 Unwanted Pain'
Sexp_6 'Sexp_6 Anxiety/Nervousness'
Sexp_7 'Sexp_7 Guilt/Shame'
Sexp_8 'Sexp_8 Skilled Partner'
Sexp_9 'Sexp_9 Unskilled Partner'
Sexp_10 'Sexp_10 Respectful Partner'
Sexp_11 'Sexp_11 Disrespectful Partner'
Sexp_12 'Sexp_12 Feeling Sexy/Desirable'
Sexp_13 'Sexp_13 Love'
Sexp_14 'Sexp_14 Obligation/Pressure'
Sexp_15 'Sexp_15 Good Communication'
Sexp_16 'Sexp_16 Inattentive Partner'
Sexp_17 'Sexp_17 Negative Social Consequences'
Sexp_18 'Sexp_18 Excitement'
Sexp_19 'Sexp_19 Safe Sex'
Sexp_20 'Sexp_20 Comfort with Partner'
Sexp_21 'Sexp_21 Feeling Used'
Sexp_22 'Sexp_22 Feeling Happy'
Sexp_23 'Sexp_23 Fear of Pregnancy'
Sexp_24 'Sexp_24 Sex Too Long'
Sexp_25 'Sexp_25 Sex Too Short'
Sexp_26 'Sexp_26 My Sexual Functioning'
Sexp_27 'Sexp_27 Partner Sexual Functioning'
Sexp_28 'Sexp_28 Negative Judgment'
Sexp_29 'Sexp_29 Positive Judgment'
Sexp_30 'Sexp_30 Difficulty with Orgasm'
Sexp_31 'Sexp_31 Confidence'
SexpP_1 'SexpP_1 P Sexual  Pleasure'
SexpP_2 'SexpP_2 P Negative Social Consequences'
SexpP_3 'SexpP_3 P Excitement'
SexpP_4 'SexpP_4 P Orgasm'
SexpP_5 'SexpP_5 P Feeling Used'
SexpP_6 'SexpP_6 P Feeling Happy'
SexpP_7 'SexpP_7 P Emotional Intimacy'
SexpP_8 'SexpP_8 P Fear of Pregnancy'
SexpP_9 'SexpP_9 P Love'
SexpP_10 'SexpP_10 P Difficulty with Orgasm'
SexpP_11 'SexpP_11 P Negative Judgment'
SexpP_12 'SexpP_12 P Positive Judgment'
Q33 'Sam Gender'
B_Frq_1 'B_Frq_1'
B_Lk 'B_Lk'
B_MCh1 'B_MCh1'
B_MCh2 'B_MCh2'
B_MCh3 'B_MCh3'
B_D1 'B_D1'
B_D2 'B_D2'
B_D3 'B_D3'
B_D4 'B_D4'
B_D5 'B_D5'
B_D6 'B_D6'
B_ODes 'B_ODes'
B_Resp1 'B_Resp1'
B_Resp2 'B_Resp2'
B_Resp3 'B_Resp3'
T_HYL_First_Click 'T_HYL_First_Click'
T_HYL_Last_Click 'T_HYL_Last_Click'
T_HYL_Page_Submit 'T_HYL_Page_Submit'
T_HYL_Click_Count 'T_HYL_Click_Count'
HYL_Frq_1 'HYL_Frq_1'
HYL_Lk 'HYL_Lk'
HYL_MCh1 'HYL_MCh1'
HYL_MCh2 'HYL_MCh2'
HYL_MCh3 'HYL_MCh3'
HYL_D1 'HYL_D1'
HYL_D2 'HYL_D2'
HYL_D3 'HYL_D3'
HYL_D4 'HYL_D4'
HYL_D5 'HYL_D5'
HYL_D6 'HYL_D6'
HYL_ODes 'HYL_ODes'
HYL_Resp1 'HYL_Resp1'
HYL_Resp2 'HYL_Resp2'
HYL_Resp3 'HYL_Resp3'
T_LYL_First_Click 'T_LYL_First_Click'
T_LYL_Last_Click 'T_LYL_Last_Click'
T_LYL_Page_Submit 'T_LYL_Page_Submit'
T_LYL_Click_Count 'T_LYL_Click_Count'
LYL_Frq_1 'LYL_Frq_1'
LYL_Lk 'LYL_Lk'
LYL_MCh1 'LYL_MCh1'
LYL_MCh2 'LYL_MCh2'
LYL_MCh3 'LYL_MCh3'
LYL_D1 'LYL_D1'
LYL_D2 'LYL_D2'
LYL_D3 'LYL_D3'
LYL_D4 'LYL_D4'
LYL_D5 'LYL_D5'
LYL_D6 'LYL_D6'
LYL_ODes 'LYL_ODes'
LYL_Resp1 'LYL_Resp1'
LYL_Resp2 'LYL_Resp2'
LYL_Resp3 'LYL_Resp3'
T_HNL_First_Click 'T_HNL_First_Click'
T_HNL_Last_Click 'T_HNL_Last_Click'
T_HNL_Page_Submit 'T_HNL_Page_Submit'
T_HNL_Click_Count 'T_HNL_Click_Count'
HNL_Frq_1 'HNL_Frq_1'
HNL_Lk 'HNL_Lk'
HNL_MCh1 'HNL_MCh1'
HNL_MCh2 'HNL_MCh2'
HNL_MCh3 'HNL_MCh3'
HNL_D1 'HNL_D1'
HNL_D2 'HNL_D2'
HNL_D3 'HNL_D3'
HNL_D4 'HNL_D4'
HNL_D5 'HNL_D5'
HNL_D6 'HNL_D6'
HNL_ODes 'HNL_ODes'
HNL_Resp1 'HNL_Resp1'
HNL_Resp2 'HNL_Resp2'
HNL_Resp3 'HNL_Resp3'
T_LNL_First_Click 'T_LNL_First_Click'
T_LNL_Last_Click 'T_LNL_Last_Click'
T_LNL_Page_Submit 'T_LNL_Page_Submit'
T_LNL_Click_Count 'T_LNL_Click_Count'
LNL_Frq_1 'LNL_Frq_1'
LNL_Lk 'LNL_Lk'
LNL_MCh1 'LNL_MCh1'
LNL_MCh2 'LNL_MCh2'
LNL_MCh3 'LNL_MCh3'
LNL_D1 'LNL_D1'
LNL_D2 'LNL_D2'
LNL_D3 'LNL_D3'
LNL_D4 'LNL_D4'
LNL_AttnChk 'LNL_AttnChk'
LNL_D5 'LNL_D5'
LNL_D6 'LNL_D6'
LNL_ODes 'LNL_ODes'
LNL_Resp1 'LNL_Resp1'
LNL_Resp2 'LNL_Resp2'
LNL_Resp3 'LNL_Resp3'
T_LNH_First_Click 'T_LNH_First_Click'
T_LNH_Last_Click 'T_LNH_Last_Click'
T_LNH_Page_Submit 'T_LNH_Page_Submit'
T_LNH_Click_Count 'T_LNH_Click_Count'
LNH_Frq_1 'LNH_Frq_1'
LNH_Lk 'LNH_Lk'
LNH_MCh1 'LNH_MCh1'
LNH_MCh2 'LNH_MCh2'
LNH_MCh3 'LNH_MCh3'
LNH_D1 'LNH_D1'
LNH_D2 'LNH_D2'
LNH_D3 'LNH_D3'
LNH_D4 'LNH_D4'
LNH_D5 'LNH_D5'
LNH_D6 'LNH_D6'
LNH_ODes 'LNH_ODes'
LNH_Resp1 'LNH_Resp1'
LNH_Resp2 'LNH_Resp2'
LNH_Resp3 'LNH_Resp3'
T_HYH_First_Click 'T_HYH_First_Click'
T_HYH_Last_Click 'T_HYH_Last_Click'
T_HYH_Page_Submit 'T_HYH_Page_Submit'
T_HYH_Click_Count 'T_HYH_Click_Count'
HYH_Frq_1 'HYH_Frq_1'
HYH_Lk 'HYH_Lk'
HYH_MCh1 'HYH_MCh1'
HYH_MCh2 'HYH_MCh2'
HYH_MCh3 'HYH_MCh3'
HYH_D1 'HYH_D1'
HYH_D2 'HYH_D2'
HYH_D3 'HYH_D3'
HYH_AttnChk 'HYH_AttnChk'
HYH_D4 'HYH_D4'
HYH_D5 'HYH_D5'
HYH_D6 'HYH_D6'
HYH_ODes 'HYH_ODes'
HYH_Resp1 'HYH_Resp1'
HYH_Resp2 'HYH_Resp2'
HYH_Resp3 'HYH_Resp3'
T_HNH_First_Click 'T_HNH_First_Click'
T_HNH_Last_Click 'T_HNH_Last_Click'
T_HNH_Page_Submit 'T_HNH_Page_Submit'
T_HNH_Click_Count 'T_HNH_Click_Count'
HNH_Frq_1 'HNH_Frq_1'
HNH_Lk 'HNH_Lk'
HNH_MCh1 'HNH_MCh1'
HNH_MCh2 'HNH_MCh2'
HNH_MCh3 'HNH_MCh3'
HNH_D1 'HNH_D1'
HNH_D2 'HNH_D2'
HNH_D3 'HNH_D3'
HNH_D4 'HNH_D4'
HNH_D5 'HNH_D5'
HNH_D6 'HNH_D6'
HNH_ODes 'HNH_ODes'
HNH_Resp1 'HNH_Resp1'
HNH_Resp2 'HNH_Resp2'
HNH_Resp3 'HNH_Resp3'
T_LYH_First_Click 'T_LYH_First_Click'
T_LYH_Last_Click 'T_LYH_Last_Click'
T_LYH_Page_Submit 'T_LYH_Page_Submit'
T_LYH_Click_Count 'T_LYH_Click_Count'
LYH_Frq_1 'LYH_Frq_1'
LYH_Lk 'LYH_Lk'
LYH_MCh1 'LYH_MCh1'
LYH_MCh2 'LYH_MCh2'
LYH_MCh3 'LYH_MCh3'
LYH_D1 'LYH_D1'
LYH_D2 'LYH_D2'
LYH_D3 'LYH_D3'
LYH_D4 'LYH_D4'
LYH_D5 'LYH_D5'
LYH_D6 'LYH_D6'
LYH_ODes 'LYH_ODes'
LYH_Resp1 'LYH_Resp1'
LYH_Resp2 'LYH_Resp2'
LYH_Resp3 'LYH_Resp3'
NumRomRel 'Number of Romantic Relationships'
GendRomP_1 'Romantic Partners - Men'
GendRomP_2 'Romantic Partners - Women'
GendRomP_3 'Romantic Partners - Non-binary'
GendRomP_4 'Romantic Partners - Describe1'
GendRomP_4_TEXT 'Romantic Partners - Describe1 Text'
GendRomP_5 'Romantic Partners - Describe2'
GendRomP_5_TEXT 'Romantic Partners - Describe2 Text'
GendRomP_6 'Romantic Partners - Dont Know'
NumSexRel 'Number of Sexual Relationships'
GendSexP_1 'Sexual Partners - Men'
GendSexP_2 'Sexual Partners - Women'
GendSexP_3 'Sexual Partners - Non-binary'
GendSexP_4 'Sexual Partners - Describe1'
GendSexP_4_TEXT 'Sexual Partners - Describe1 Text'
GendSexP_5 'Sexual Partners - Describe2'
GendSexP_5_TEXT 'Sexual Partners - Describe2 Text'
GendSexP_6 'Sexual Partners - Dont Know'
NumSexPart_RecOral_Yr_1 '# Partners - Past Year - Receive Oral'
NumSexPart_GivOral_Yr_1 '# Partners - Past Year - Give Oral'
NumSexPart_Anal_Yr_1 '# Partners - Past Year - Anal'
NumSexPart_PVI_Yr_1 '# Partners - Past Year - PVI'
NumSexPart_Kiss_Yr_1 '# Partners - Past Year - Kissing/Making Out'
NumSexPart_Toys_Yr_1 '# Partners - Past Year - Sexual Toys'
NumSexPart_Hand_Yr_1 '# Partners - Past Year - Manual/Hand Stimulation'
NumSexPart_Other_Yr_TEXT '# Partners - Past Year - Other Text'
NumSexPart_Other_Yr_1 '# Partners - Past Year - Other'
NumSexPart_RecOral_Life_1 '# Partners - Lifetime - Receive Oral'
NumSexPart_GivOral_Life_1 '# Partners - Lifetime - Give Oral'
NumSexPart_Anal_Life_1 '# Partners - Lifetime - Anal'
NumSexPart_PVI_Life_1 '# Partners - Lifetime - PVI'
NumSexPart_Kiss_Life_1 '# Partners - Lifetime - Kissing/Making Out'
NumSexPart_Toys_Life_1 '# Partners - Lifetime - Sexual Toys'
NumSexPart_Hand_Life_1 '# Partners - Lifetime - Manual/Hand Stimulation'
NumSexPart_Other_Life_TEXT '# Partners - Lifetime - Other Text'
NumSexPart_Other_Life_1 '# Partners - Lifetime - Other'
SexBehEnj_RecOral 'SexBehEnj_RecOral'
SexBehEnj_GivOral 'SexBehEnj_GivOral'
SexBehEnj_Anal 'SexBehEnj_Anal'
SexBehEnj_PVI 'SexBehEnj_PVI'
SexBehEnj_Kiss 'SexBehEnj_Kiss'
SexBehEnj_AttChk 'SexBehEnj_AttChk'
SexBehEnj_Toys 'SexBehEnj_Toys'
SexBehEnj_Hand 'SexBehEnj_Hand'
SexBehEnj_Other 'SexBehEnj_Other'
SexBehEnj_Other_TEXT 'SexBehEnj_Other_TEXT'
SexBehEnj0_RecOral 'SexBehEnj0_RecOral'
SexBehEnj0_GivOral 'SexBehEnj0_GivOral'
SexBehEnj0_Anal 'SexBehEnj0_Anal'
SexBehEnj0_PVI 'SexBehEnj0_PVI'
SexBehEnj0_Kiss 'SexBehEnj0_Kiss'
SexBehEnj0_AttChk 'SexBehEnj0_AttChk'
SexBehEnj0_Toys 'SexBehEnj0_Toys'
SexBehEnj0_Hand 'SexBehEnj0_Hand'
SexBehEnj0_Other 'SexBehEnj0_Other'
SexBehEnj0_Other_TEXT 'SexBehEnj0_Other_TEXT'
YSEX_1 'YSEX_1ExpressLove'
YSEX_2 'YSEX_2Aroused'
YSEX_3 'YSEX_3WantedPleasure'
YSEX_4 'YSEX_4Hormones'
YSEX_5 'YSEX_5HeardGoodinBed'
YSEX_6 'YSEX_6WantedEmotClose'
YSEX_7 'YSEX_7PleasePartner'
YSEX_8 'YSEX_8WantedPurePleasure'
YSEX_9 'YSEX_9WantedOrgasm'
YSEX_AttnChk 'YSEX_AttnChk'
YSEX_10 'YSEX_10FeelsGood'
YSEX_11 'YSEX_11AttractivePerson'
YSEX_12 'YSEX_12Baby'
YSEX_13 'YSEX_13PartnerOrgasm'
YSEX_14 'YSEX_14TheyInitiated'
YSEX_15 'YSEX_15FeltSexy'
YSEX_16 'YSEX_16TheyDesiredMe'
YSEX_17 'YSEX_17SexualConversation'
YSEX_18 'YSEX_18EnhanceReputation'
YSEX_19 'YSEX_19ExpectedPleasure'
YSEX_20 'YSEX_20Other'
YSEX_20_TEXT 'YSEX_20_TEXT'
CurrRel 'Currently in a Relationship'
RelStat_1 'CurRel - Casually dating one person'
RelStat_2 'CurRel - Casually dating more than one person'
RelStat_3 'CurRel - Seriously dating one person'
RelStat_4 'CurRel - Seriously dating more than one person'
RelStat_5 'CurRel - Cohabiting'
RelStat_6 'CurRel - Engaged'
RelStat_7 'CurRel - Married'
RelStat_8 'CurRel - Prefer to describe'
RelStat_8_TEXT 'CurRel - Prefer to describe Text'
LDR 'Long-Distance Relationship'
HBC 'Hormonal Birth Control Use'
HBC_Len 'Duration using the hormonal birth control'
SexImp 'Importance of Sex in Your Life'
SexualP 'Describe as a Sexual Person'
FSFI1 'FSFI1 - Frequency of desire'
FSFI2 'FSFI2 - Degree of desire'
OrgEver 'Ever had orgasm'
FOS1F 'FOS1F - Vaginal No Clitoral'
FOS1M 'FOS1M - Vaginal No Clitoral for partner'
FOS2F 'FOS2F - Vaginal + Clitoral'
FOS2M 'FOS2M - Vaginal + Clitoral for partner'
FOS3 'FOS3 - Hand/Manual Stimulation'
FOS4 'FOS4 - Masturbation'
FOS5 'FOS5 - Oral'
FOS6 'FOS6 - Anal (rec)'
FOS7 'FOS7 - Anal (give)'
FOS8 'FOS8 - Satisfaction with number of orgasms'
FOS9 'FOS9 - Satisfaction with quality of orgasms'
Age 'Age'
RaceEthn_1 'Race/Eth - American indian / Native Am'
RaceEthn_2 'Race/Ethn - Asian American or Pacific Islander'
RaceEthn_3 'Race/Ethn - Black or African American'
RaceEthn_4 'Race/Ethn - Hispanic/Latino/Latina or Spanish origin'
RaceEthn_5 'Race/Ethn - White or Caucasian'
RaceEthn_6 'Race/Ethn - Bi/Multiracial'
RaceEthn_7 'Race/Ethn - Prefer to describe'
RaceEthn_8 'Race/Ethn - Prefer not to answer'
RaceEthn_7_TEXT 'Race/Ethn - Prefer to describe Text'
Gender1_1 'Gender - Man'
Gender1_2 'Gender - Woman'
Gender1_3 'Gender - Transgender'
Gender1_4 'Gender - Agender'
Gender1_5 'Gender - Non-binary'
Gender1_6 'Gender - Prefer to describe'
Gender1_7 'Gender - Prefer not to answer'
Gender1_6_TEXT 'Gender - Prefer to describe Text'
Gender2 'Gender 2 ManWomanBothNeither'
SexOrient1_1 'SexOrient - Exclusively Heterosexual'
SexOrient1_2 'SexOrient - Mostly/Predominately Heterosexual'
SexOrient1_3 'SexOrient - Bisexuall'
SexOrient1_4 'SexOrient - Mostly/Predominately gay or lesbian'
SexOrient1_5 'SexOrient - Exclusively gay or lesbian'
SexOrient1_6 'SexOrient - Pansexual'
SexOrient1_7 'SexOrient - Asexual'
SexOrient1_8 'SexOrient - Prefer to describe'
SexOrient1_9 'SexOrient - Unsure'
SexOrient1_10 'SexOrient - Prefer not to answer'
SexOrient1_8_TEXT 'SexOrient - Prefer to describe Text'
SexOrient2_1 'SexInterest - Woman'
SexOrient2_9 'SexInterest - Man'
SexOrient2_10 'SexInterest - Intersex or Trans folks'
SexOrient2_7 'SexInterest - Prefer to describe'
SexOrient2_7_TEXT 'SexInterest - Prefer to describe Text'
MomEd 'Mother Education'
DadEd 'Father Education'
Student 'Current Student Status'
UndgrdYrs '# years in undergrad'
GrdYrs '# years in grad'
IntnlStud 'International Student'
Frat 'Fraternity or Sorority'
Educ 'Education'
Employ_1 'Employ - FT Out of home'
Employ_2 'Employ - PT Out of home'
Employ_3 'Employ - FT In home'
Employ_4 'Employ - PT In home'
Employ_5 'Employ - Not currently working'
Employ_6 'Employ - Prefer to describe'
Employ_7 'Employ - Other'
Employ_6_TEXT 'Employ - Prefer to describe Text'
Employ_7_TEXT 'Employ - Other Text'
FinStrn 'Financial Strain'
LiveUS 'Years Residing in US'
Eng 'Primary Language English'
Divorce 'Divorce'
Kids 'Children'
Order1 'Order1'
Order2 'Order2'
Order3 'Order3'
Order4 'Order4'
Order5 'Order5'
Order6 'Order6'
Order7 'Order7'
Order8 'Order8'
Order9 'Order9'
Order10 'Order10'
Order11 'Order11'
Order12 'Order12'
Order13 'Order13'
Order14 'Order14'
Order15 'Order15'
Order16 'Order16'
Female 'Female'.


RENAME VARIABLES
(Sexp_1=Sexp_1E)
(Sexp_2=Sexp_2O)
(Sexp_4=Sexp_4P)
(Sexp_13=Sexp_13L)
(Sexp_30=Sexp_30DO)
(SexpP_1=SexpP_1P)
(SexpP_4=SexpP_4O)
(SexpP_7=SexpP_7E)
(SexpP_10=SexpP_10DO)
.


RENAME VARIABLES
(Sexp_3=Sexp_3Discomfort)
(Sexp_5=Sexp_5Pain)
(Sexp_6=Sexp_6Anxious)
(Sexp_7=Sexp_7Guilt)
(Sexp_8=Sexp_8SkillP)
(Sexp_9=Sexp_9UnsklP)
(Sexp_10=Sexp_10RspctflP)
(Sexp_11=Sexp_11DisrspctflP)
(Sexp_12=Sexp_12FeelSxy)
(Sexp_14=Sexp_14OblPres)
(Sexp_15=Sexp_15GdCom)
(Sexp_16=Sexp_16InatP)
(Sexp_17=Sexp_17NegSocCons)
(Sexp_18=Sexp_18Excite)
(Sexp_19=Sexp_19SafeSex)
(Sexp_20=Sexp_20ComfwP)
(Sexp_21=Sexp_21Used)
(Sexp_22=Sexp_22Happy)
(Sexp_23=Sexp_23FearPregn)
(Sexp_24=Sexp_24TooLong)
(Sexp_25=Sexp_25TooShort)
(Sexp_26=Sexp_26OwnSexFunct)
(Sexp_27=Sexp_27PSexFunct)
(Sexp_28=Sexp_28NegJudg)
(Sexp_29=Sexp_29PosJudg)
(Sexp_31=Sexp_31Confdc)
(SexpP_2=SexpP_2PNegSocCons)
(SexpP_3=SexpP_3PExcite)
(SexpP_5=SexpP_5PUsed)
(SexpP_6=SexpP_6PHappy)
(SexpP_8=SexpP_8PFearPregn)
(SexpP_9=SexpP_9PLove)
(SexpP_11=SexpP_11PNegJudg)
(SexpP_12=SexpP_12PPosJudg)
.

RENAME VARIABLES
(Sexp_32=Sexp_32SlutShame)
(Sexp_33=Sexp_33FearAcc)
(SexpP_13=SexpP_13PSlutShame)
(SexpP_14=SexpP_14PFearAcc)
.


VARIABLE LABELS
Sexp_32SlutShame 'Sexp_32 SlutShamed'
Sexp_33FearAcc 'Sexp_33 Fear Accusation'
SexpP_13PSlutShame 'SexpP_13 P SlutShamed'
SexpP_14PFearAcc 'SexpP_14 P Fear Accusation'
.




RENAME VARIABLES
(SDI3_1=SDI3)
(SDI4_1=SDI4)
(SDI6_1=SDI6)
(SDI7_1=SDI7)
(SDI8_1=SDI8)
(SDI9_1=SDI9)
(SDI11_1=SDI11)
(SDI12_1=SDI12)
(SDI13_1=SDI13)
.

RENAME VARIABLES
(YSEX_1=YSEX_1ExpressLove)
(YSEX_2=YSEX_2Aroused)
(YSEX_3=YSEX_3WantedPleasure)
(YSEX_4=YSEX_4Hormones)
(YSEX_5=YSEX_5HeardGoodinBed)
(YSEX_6=YSEX_6WantedEmotClose)
(YSEX_7=YSEX_7PleasePartner)
(YSEX_8=YSEX_8WantedPurePleasure)
(YSEX_9=YSEX_9WantedOrgasm)
(YSEX_AttnChk=YSEX_AttnChk)
(YSEX_10=YSEX_10FeelsGood)
(YSEX_11=YSEX_11AttractivePerson)
(YSEX_12=YSEX_12Baby)
(YSEX_13=YSEX_13PartnerOrgasm)
(YSEX_14=YSEX_14TheyInitiated)
(YSEX_15=YSEX_15FeltSexy)
(YSEX_16=YSEX_16TheyDesiredMe)
(YSEX_17=YSEX_17SexualConversation)
(YSEX_18=YSEX_18EnhanceReputation)
(YSEX_19=YSEX_19ExpectedPleasure)
(YSEX_20=YSEX_20Other)
.


*FOR DATASETS DOWNLOADED PRIOR TO RECODING.
*RECODE SDI5_1 (1=0) (4=1) (5=2) (6=3) (7=4) (8=5) (9=6) (10=7) (11=8) INTO SDI5.
*EXECUTE.
*VARIABLE LABELS SDI5 'SDI5'.
*VALUE LABELS SDI5 0 '0' 1 '1' 2 '2' 3 '3' 4 '4' 5 '5' 6 '6' 7 '7' 8 '8'.


*Fixing SDI 5 when changed prematurely; likely best to ignore completely.
*RECODE SDI5 (1=0) (4=1) (5=2) (6=3) (7=4) (8=5) (9=6) (10=7) (11=8).
*EXECUTE.
*VARIABLE LABELS SDI5 'SDI5fix'.

*RENAME VARIABLES
(SDI5_1=SDI5).

VARIABLE LABELS
SDI1 'SDI1'
SDI2 'SDI2'
SDI3 'SDI3'
SDI4 'SDI4'
SDI5 'SDI5'
SDI6 'SDI6'
SDI7 'SDI7'
SDI8 'SDI8'
SDI9 'SDI9'
SDI10 'SDI10'
SDI11 'SDI11'
SDI12 'SDI12'
SDI13 'SDI13'
SDI14 'SDI14'
.





ALTER TYPE Rejected (F1).

MISSING VALUES NumRomRel NumSexRel (999).

*CHECK THAT THE SAMPLE CODING IS College=1 Mturk=0.
*Depends on which dataset was opened first when combining.
FREQUENCIES VARIABLES Sample.

*IF COLLEGE = 1 INITIALLY.
*RECODE Sample (1=1) (0=2).
**VARIABLE LABELS Sample 'Sample'.
*EXECUTE.
*VALUE LABELS Sample 1 'College' 2 'Mturk'.

*IF COLLEGE = 0 INITIALLY.
RECODE Sample (0=1) (1=2).
VARIABLE LABELS Sample 'Sample'.
EXECUTE.
VALUE LABELS Sample 1 'College' 2 'Mturk'.







*Different Variables for Mturk vs College; Account for SCALE.
DO IF (Sample=1).
    RECODE Sexp_2O Sexp_30DO Sexp_4P Sexp_1E (1=1) (2=2) (3=3) (4=4) (5=5) 
        INTO CSexpO CSexpDO CSexpP CSexpE.
ELSE.
    RECODE Sexp_2O Sexp_30DO Sexp_4P Sexp_1E (1=1) (ELSE=COPY) 
        INTO MSexpO MSexpDO MSexpP MSexpE.
END IF.
VALUE LABELS CSexpO CSexpDO CSexpP CSexpE  1 'DefNot' 2 'ProbNot' 3 'Might' 4 'ProbWill' 5 'DefWill'.
VALUE LABELS MSexpO MSexpDO MSexpP MSexpE 1 'Def would not' 2 'Very unlikely' 3 'Somewhat unlikely' 
                                        4 'Might/MightNot' 5 'Somewhat likely' 6 'Very likely' 7 'Def would'.

VARIABLE LABELS 
CSexpO 'CSexpO'
CSexpDO 'CSexpDO'
CSexpP 'CSexpP'
CSexpE 'CSexpE'
MSexpO 'MSexpO'
MSexpDO 'MSexpDO'
MSexpP 'MSexpP'
MSexpE 'MSexpE'.
EXECUTE.

FREQUENCIES VARIABLES=CSexpO CSexpDO CSexpP CSexpE MSexpO MSexpDO MSexpP MSexpE.



DO IF (Sample=1).
    RECODE SexpP_4O SexpP_10DO SexpP_1P SexpP_7E (1=1) (2=2) (3=3) (4=4) (5=5) 
        INTO CSexpPO CSexpPDO CSexpPP CSexpPE.
ELSE.
    RECODE SexpP_4O SexpP_10DO SexpP_1P SexpP_7E (1=1) (ELSE=COPY) 
        INTO MSexpPO MSexpPDO MSexpPP MSexpPE.
END IF.
VALUE LABELS CSexpPO CSexpPDO CSexpPP CSexpPE  1 'DefNot' 2 'ProbNot' 3 'Might' 4 'ProbWill' 5 'DefWill'.
VALUE LABELS MSexpPO MSexpPDO MSexpPP MSexpPE 1 'Def would not' 2 'Very unlikely' 3 'Somewhat unlikely' 
                                        4 'Might/MightNot' 5 'Somewhat likely' 6 'Very likely' 7 'Def would'.
VARIABLE LABELS 
CSexpPO 'CSexpPO'
CSexpPDO 'CSexpPDO'
CSexpPP 'CSexpPP'
CSexpPE 'CSexpPE'
MSexpPO 'MSexpPO'
MSexpPDO 'MSexpPDO'
MSexpPP 'MSexpPP'
MSexpPE 'MSexpPE'.
EXECUTE.

FREQUENCIES VARIABLES=CSexpPO CSexpPDO CSexpPP CSexpPE MSexpPO MSexpPDO MSexpPP MSexpPE.

*******************************************************************************.
******* CORRECTING IN CASE IT WASNT DONE ALREADY *********.
*******************************************************************************.

*For MTURK Sample: FIXING RESPONSES.

*This worker wrote in the comments that he accidentally selected "female",
but that he answered the questions as if he were a male. Updating responses to reflect this.
IF (WorkerID = 'A3IRT5NAX14OIT') Female=0.
IF (WorkerID = 'A3IRT5NAX14OIT') ASEX3F=$SYSMIS.
IF (WorkerID = 'A3IRT5NAX14OIT') HBC=$SYSMIS.
IF (WorkerID = 'A3IRT5NAX14OIT') FOS1F=$SYSMIS.
IF (WorkerID = 'A3IRT5NAX14OIT') FOS2F=$SYSMIS.
IF (WorkerID = 'A3IRT5NAX14OIT') FOS1M=9.
IF (WorkerID = 'A3IRT5NAX14OIT') FOS2M=9.
EXECUTE.


IF (WorkerID = 'A2YFTTVAH9AFXU' & ResponseID = 'R_1Nku0ILvgGfNL2x') Rejected=0.
EXECUTE.





************************************************************************************************************************************.
************************************************************************************************************************************.
*****************************************************  DATA VALIDATION ******************************************************.
************************************************************************************************************************************.
************************************************************************************************************************************.
*DATA VALIDATION.
*_____.



********************************************************************************.
************************  DATA VALIDATION  ******************************.
********************************************************************************.
*DATA VALIDATION.
*_____.

*List of variables created below.
FREQUENCIES VARIABLES
DeleteOptOut
DeleteProg
DeleteAge
DeleteTestRun
DeleteAttn
DeleteInst
DeleteData
DeleteIndiv
DeleteCom
DeleteSum
DeleteAny
.



*For MTURK Sample: FIXING RESPONSES.

*This worker wrote in the comments that he accidentally selected "female",
but that he answered the questions as if he were a male.
IF (WorkerID = '[ID removed for confidentiality]') Female=0.
IF (WorkerID = '[ID removed for confidentiality]') ASEX3F=$SYSMIS.
IF (WorkerID = '[ID removed for confidentiality]') HBC=$SYSMIS.
IF (WorkerID = '[ID removed for confidentiality]') FOS1F=$SYSMIS.
IF (WorkerID = '[ID removed for confidentiality]') FOS2F=$SYSMIS.
IF (WorkerID = '[ID removed for confidentiality]') FOS1M=9.
IF (WorkerID = '[ID removed for confidentiality]') FOS2M=9.
EXECUTE.



*Test run.
COMPUTE DeleteTestRun=0.
EXECUTE.

NUMERIC DeleteTestRun (F1).
VARIABLE LABELS DeleteTestRun 'Delete test runs'.
IF ResponseId='R_NY0yKVBvodoiC89' DeleteTestRun=1.
EXECUTE.

FREQUENCIES VARIABLES DeleteTestRun.





***********************************************.
******* METADATA VARIABLES *********.
***********************************************.

*FINISHED.
*PROGRESS.
*DURATION.


*Creating variable for total time spent on survey.
COMPUTE  TotalTime=(EndDate - StartDate) / 60. 
VARIABLE LABELS  TotalTime "Total Time Spent on Survey". 
VARIABLE LEVEL  TotalTime (SCALE). 
FORMATS  TotalTime (F8.2). 
VARIABLE WIDTH  TotalTime(8). 
EXECUTE.




FREQUENCIES VARIABLES=Progress Duration__in_seconds_ Finished
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN
  /HISTOGRAM
  /ORDER=ANALYSIS.


*Progress.
*Deleting the responses that were not completed.
NUMERIC DeleteProg (F1).
VARIABLE LABELS DeleteProg 'Delete those who did not complete the study'.
IF (Progress<99) DeleteProg = 1.
IF (Progress>99) DeleteProg = 0.
EXECUTE.

FREQUENCIES VARIABLES=Progress DeleteProg.


*DURATION.
*Checking data for sexual expectancies measure.
WorkerID (non rejected).
*[ID removed for confidentiality]: 585 secs; Sexp looks ok.
*[ID removed for confidentiality]: 790 secs; looks ok.
*[ID removed for confidentiality]: 854 secs; sexp looks ok.
*[ID removed for confidentiality] 874; sexp looks ok.
*[ID removed for confidentiality]: 970 secs; sexp looks ok.
*[ID removed for confidentiality] 1054; sexp looks ok.
*[ID removed for confidentiality] 1072; sexp looks ok.
*[ID removed for confidentiality] 1173; looks ok for sexp.
*[ID removed for confidentiality] 1184; looks oke for sexp.
*[ID removed for confidentiality] 1239 looks ok for sexp.

*RespID: R_1fkkRluAeSbf8lp: Looks ok for sexp.

*[ID removed for confidentiality], [ID removed for confidentiality] - too fast for sexp; answers seem questionable.


******************************************.
******* TIMING VARIABLES *********.
******************************************.

*Who actually read the instructions? T_ExpD_Page_Submit

*Vignette instructions. A few problematic timings for Page Submit:
3.19 seconds = no comprehension.

*Baseline instructions etc: 29.46 seconds is about half what the next lowest number was.

COMPUTE MaxTimeVign=MAX(T_Base_Page_Submit,T_HYL_Page_Submit,T_LYL_Page_Submit,T_HNL_Page_Submit,
    T_LNL_Page_Submit,T_LNH_Page_Submit,T_HYH_Page_Submit,T_HNH_Page_Submit,T_LYH_Page_Submit).
EXECUTE.

COMPUTE MinTimeVign=MIN(T_Base_Page_Submit,T_HYL_Page_Submit,T_LYL_Page_Submit,T_HNL_Page_Submit,
    T_LNL_Page_Submit,T_LNH_Page_Submit,T_HYH_Page_Submit,T_HNH_Page_Submit,T_LYH_Page_Submit).
EXECUTE.

COMPUTE AvgTimeVign=mean(T_Base_Page_Submit,T_HYL_Page_Submit,T_LYL_Page_Submit,T_HNL_Page_Submit,
    T_LNL_Page_Submit,T_LNH_Page_Submit,T_HYH_Page_Submit,T_HNH_Page_Submit,T_LYH_Page_Submit).
EXECUTE.looks ok for sexp.
*[ID removed for confidentiality] 1184; looks oke for sexp.
*[ID removed for confidentiality] 1239 looks ok for sexp.

*RespID: R_1fkkRluAeSbf8lp: Looks ok for sexp.

FREQUENCIES VARIABLES=T_ExpD_Page_Submit
  /FORMAT=NOTABLE
  /NTILES=5
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN
  /HISTOGRAM
  /ORDER=ANALYSIS.



*GETTING Z SCORES.
*IMPORTANT!!!!!: Reminder: WHEN you do this sample matters since it compares to the rest of the sample 
                                (e.g., what data has already been removed).
DESCRIPTIVES VARIABLES=T_Intro_Page_Submit T_PANAS_Page_Submit T_TIPI_Page_Submit T_ECR_Page_Submit 
    T_Sexp1_Page_Submit T_Sexp2_Page_Submit T_Sexp3_Page_Submit T_Sexp4_Page_Submit T_ExpD_Page_Submit 
    T_SexHist1_Page_Submit T_Hist2_Page_Submit T_Hist3_Page_Submit T_Hist4_Page_Submit 
    T_Hist5_Page_Submit T_Hist6_Page_Submit T_YSEX_Page_Submit T_CurrRel1_Page_Submit 
    T_CurrRel2_Page_Submit T_CurrRel3_Page_Submit T_CurrRel4_Page_Submit T_CurrRel5_Page_Submit 
    T_ASEX_Page_Submit T_FOS_Page_Submit T_Dem1_Page_Submit T_Dem3_Page_Submit T_Orient_Page_Submit 
    T_Orient_Click_Count
  /SAVE
  /STATISTICS=MEAN STDDEV MIN MAX.


COMPUTE TClick2Sub_Sexp1=T_Sexp1_Page_Submit-T_Sexp1_First_Click.
COMPUTE TClick2Sub_Sexp2=T_Sexp2_Page_Submit-T_Sexp2_First_Click.
COMPUTE TClick2Sub_Sexp3=T_Sexp3_Page_Submit-T_Sexp3_First_Click.
COMPUTE TClick2Sub_Sexp4=T_Sexp4_Page_Submit-T_Sexp4_First_Click.
EXECUTE.

DESCRIPTIVES VARIABLES= TClick2Sub_Sexp1 TClick2Sub_Sexp2
  TClick2Sub_Sexp3 TClick2Sub_Sexp4
  /SAVE
  /STATISTICS=MEAN STDDEV MIN MAX.

FREQUENCIES VARIABLES=T_Sexp1_Page_Submit T_Sexp2_Page_Submit T_Sexp3_Page_Submit T_Sexp4_Page_Submit
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN
  /HISTOGRAM
  /ORDER=ANALYSIS.

*PANAS, TIPI, ECR, Sexp - also seem ok; nothing too standout in terms of timing.

FREQUENCIES VARIABLES=T_ExpD_Page_Submit
  /NTILES=5
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN
  /ORDER=ANALYSIS.

*For those who read the instructions in less than 5 seconds.
IF(T_ExpD_Page_Submit < 5.0) DeleteInst=1.
IF(T_ExpD_Page_Submit GE 5.0) DeleteInst=0.
EXECUTE.
VARIABLE LABELS DeleteInst 'Delete those who were on the instructions page for less than 5 seconds'.

FREQUENCIES VARIABLES=DeleteInst.



*******************************************.
******* ATTENTION CHECKS *********.
*******************************************.

*FIXING the HYH_AttnChk for the 8 women who were unable to move on without clicking something
(From note: "the 8 women who had to enter a response in order to move on (date: 11/19 at 1:30pm)".

* Date and Time Wizard: BeginDate.
COMPUTE BeginDate=XDATE.DATE(StartDate).
VARIABLE LABELS BeginDate "BeginDate".
VARIABLE LEVEL BeginDate(SCALE).
FORMATS BeginDate(EDATE8).
VARIABLE WIDTH BeginDate(8).
EXECUTE.

* Date and Time Wizard: BeginHour.
COMPUTE BeginHour=XDATE.HOUR(StartDate).
VARIABLE LABELS BeginHour "BeginHour".
VARIABLE LEVEL BeginHour(SCALE).
FORMATS BeginHour(F8.0).
VARIABLE WIDTH BeginHour(8).
EXECUTE.

*Check that it worked correctly.
FREQUENCIES VARIABLES BeginDate BeginHour.


RECODE HYH_AttnChk (SYSMIS=1) (ELSE=0) INTO HYH_AttnChk1.
EXECUTE.
VALUE LABELS HYH_AttnChk1 1 'Correct' 0 'Missed'.

NUMERIC FixHYH (F1).

IF ((DATE.DMY(XDATE.MDAY(BeginDate),XDATE.MONTH(BeginDate),
XDATE.YEAR(BeginDate)) = DATE.DMY(19,11,2018)) & BeginHour=13) FixHYH=1.
EXECUTE.

IF (FixHYH=1) HYH_AttnChk1=1.
EXECUTE.

FREQUENCIES VARIABLES=HYH_AttnChk FixHYH HYH_AttnChk1.



*Recoding attn chk variables into Missed variables, ie, counting those who missed the attn chk.
FREQUENCIES VARIABLES=ECR_AttChk AttChk LNL_AttnChk HYH_AttnChk HYH_AttnChk1 SexBehEnj_AttChk SexBehEnj0_AttChk 
    YSEX_AttnChk AttnChks
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN
  /ORDER=ANALYSIS.


RECODE HYH_AttnChk1 (1=0) (0=1) INTO MissHYHac.
VARIABLE LABELS MissHYHac 'Missed HYH Attn Chk'.
EXECUTE.
VALUE LABELS MissHYHac 1 'Missed' 0 'Didnt miss'.
FREQUENCIES VARIABLES=MissHYHac HYH_AttnChk FixHYH HYH_AttnChk1.


RECODE ECR_AttChk (1=0) (SYSMIS=SYSMIS) (ELSE=1) INTO MissECRac.
VARIABLE LABELS MissECRac 'Missed ECR Attn Chk'.
EXECUTE.
VALUE LABELS MissECRac 1 'Missed' 0 'Didnt miss'.
FREQUENCIES VARIABLES=ECR_AttChk MissECRac.


RECODE LNL_AttnChk (1=0) (SYSMIS=SYSMIS) (ELSE=1) INTO MissLNLac.
VARIABLE LABELS MissLNLac 'Missed LNL Attn Chk'.
EXECUTE.
VALUE LABELS MissLNLac 1 'Missed' 0 'Didnt miss'.
FREQUENCIES VARIABLES=LNL_AttnChk MissLNLac.


RECODE SexBehEnj_AttChk (1=0) (SYSMIS=SYSMIS) (ELSE=1) INTO MissSexBeh1ac.
VARIABLE LABELS MissSexBeh1ac 'Missed SexBeh1 Attn Chk'.
EXECUTE.
VALUE LABELS MissSexBeh1ac 1 'Missed' 0 'Didnt miss'.
FREQUENCIES VARIABLES=SexBehEnj_AttChk SexBehEnj0_AttChk MissSexBeh1ac.


*NOTE: 8 partiticpants were not presented with the SexBehEnj0 even though they reported having 0 previous sexual partners;
the SexBehEnj0 items were not included until Nov 26 2019. BUT - when calculating a sum of MISSED attn chks, this shouldn't
make a difference. Only when calculating correct Attn Chks would this be an issue.
RECODE SexBehEnj0_AttChk (1=0) (SYSMIS=SYSMIS) (ELSE=1) INTO MissSexBeh0ac.
VARIABLE LABELS MissSexBeh0ac 'Missed SexBeh0 Attn Chk'.
EXECUTE.
VALUE LABELS MissSexBeh0ac 1 'Missed' 0 'Didnt miss'.
FREQUENCIES VARIABLES=SexBehEnj_AttChk SexBehEnj0_AttChk MissSexBeh1ac MissSexBeh0ac.


RECODE YSEX_AttnChk (5=0) (SYSMIS=1) (ELSE=1) INTO MissYSEXac.
VARIABLE LABELS MissYSEXac 'Missed YSEX Attn Chk'.
EXECUTE.
VALUE LABELS MissYSEXac 1 'Missed' 0 'Didnt miss'.
FREQUENCIES VARIABLES=YSEX_AttnChk MissYSEXac.
*1 missing; mturk; coding as missed.


RECODE AttChk (1=0) (SYSMIS=SYSMIS) (ELSE=1) INTO MissInstrac.
VARIABLE LABELS MissInstrac 'Missed instructions Attn Chk'.
EXECUTE.
VALUE LABELS MissInstrac 1 'Missed' 0 'Didnt miss'.
FREQUENCIES VARIABLES=AttChk MissInstrac.



COMPUTE MissAttnChks=sum.1(MissECRac, MissInstrac, MissLNLac, MissHYHac, MissSexBeh1ac, MissSexBeh0ac, MissYSEXac).
VARIABLE LABELS MissAttnChks 'Sum of missed attn chks'.
EXECUTE.

FREQUENCIES VARIABLES=MissAttnChks.
*0	471
1	107
2	23
3	8
4	5
5	3
Total	617.

*Final.
*0	471
1	154
2	27
3	8
4	5
5	3
Total	668.




*Those who missed 5 attn checks:
[ID removed for confidentiality]
[ID removed for confidentiality]
[ID removed for confidentiality].

*Missed 4:
[ID removed for confidentiality]
[ID removed for confidentiality]
[ID removed for confidentiality]
[ID removed for confidentiality].


*Missed 3:
[ID removed for confidentiality]
[ID removed for confidentiality]
[ID removed for confidentiality]
[ID removed for confidentiality]
[ID removed for confidentiality]
[ID removed for confidentiality]
[ID removed for confidentiality]
[ID removed for confidentiality].

*Of those who missed 3, those who missed both HYH and LNL:
[ID removed for confidentiality]
[ID removed for confidentiality]
[ID removed for confidentiality] -- upon further inspection, it does look like they payed attn during the vignettes for the most part
[ID removed for confidentiality]
[ID removed for confidentiality]
[ID removed for confidentiality].


*Delete all who missed more than 2 except [ID removed for confidentiality].
NUMERIC DeleteAttn (F1).
VARIABLE LABELS DeleteAttn 'Delete those who missed 3 or more attn checks'.

IF (MissAttnChks > 2) DeleteAttn=1.
IF (WorkerID ='AG6WV3WODQ7IN') DeleteAttn=0.
EXECUTE.


*Missing 2 attn checks; checking data closely.
*Clearly bad data + missed 2 attn chks.
NUMERIC DeleteData (F1).
VARIABLE LABELS DeleteData 'Delete those whose data was of low quality + missed attnchks'.
IF (WorkerID='ABL3H3O3BI8ZD') DeleteData=1.
IF (WorkerID='A296WX3QFEK7A0') DeleteData=1.
EXECUTE.

*fine.*
R_2flFuWEP5TkvFxe
R_3JKkso6Sr4ztmfA
R_31KlQyQSJzKJ384
R_UJCf7qkZ1zIiEBX
R_2qCVbRp3KGU40R7
R_2qCVbRp3KGU40R7
R_1DGyilrZct1xOIt
R_2ttGuvUSnyC27Oi
R_1NqWN89yEBusDd0
R_3kmQJ0HIvDPA7Nn
R_2cvBRwI2uEtkA8A
R_pzqEfLgk9eAH8fT
R_1H0IJAB1Jz8sDqK
R_1dLFf2ba37oA6WO
R_2eUrbpr0seQXacj
R_PLiAwoIYy3dCbqF
R_1eKK53o8UkMmkhP
R_x2UpsDBhqf6YwSJ.






RECODE PotentialIssues (SYSMIS=0) (ELSE=COPY).
EXECUTE.

************************************************.
********** CLEARLY BAD DATA ************.
************************************************.
ResponseID: R_216z9gHKTtWBJla;  WorkerID: AFSZT3BXPRR9N; Rejected: yes.
    *most responses were 4s throughout the entire survey; missed 5 attn chks.

ResponseID: R_1jHW4kFbR48JTdH;  WorkerID: A22FGOCLVW06TK; Rejected: yes.
    *manip checks didn't make any sense; often too quick; missed 5 attn chks.

ResponseID: R_20P2Uos8kzoIhvw;  WorkerID: AYW8JHY2OYJS7; Rejected: yes.
    *manip checks didn't make any sense; often too quick; no internal consistency; missed 4 attn chks.

ResponseID: R_3EW4UR2txxAsAmd;  WorkerID: A2IORKGF987TYJ; Rejected: yes.
    *manip checks didn't make any sense; WAY too quick (e.g., 8 seconds); no internal consistency; missed 4 attn chks.

ResponseID: R_1IzWWWjGhrciJYo;  WorkerID: A123S1NRYJDS4D; Rejected: yes.
    *manip checks didn't make any sense; WAY too quick (e.g., 12 seconds); no internal consistency; missed 3 attn checks

ResponseID: R_3kB56YIFhydr1rk;  WorkerID: A524WZ3LA2L2K; Rejected: yes.
    *manip checks didn't make any sense; no internal consistency; missed 3 attn checks

ResponseID: R_SIAudC7RCigm1lT;  WorkerID: AKJRJZKGEO8ST; Rejected: yes.
    *manip checks didn't make any sense; no internal consistency; All values almost exactly the same across all vignettes; missed 3 attn checks

ResponseID: R_2flFuWEP5TkvFxe;  WorkerID: A36X6B6HXD442I; Rejected: no.
    *manip checks didn't make any sense; no internal consistency; missed 2 attn checks

IF (ResponseId='R_2flFuWEP5TkvFxe') DeleteData=1.
EXECUTE.


*Questionable
R_2v08JCOXF5FiQU5
R_w1awFvxnxs21zDb - rejected
R_sApawrhQLdXs41z.

IF (ResponseId='R_2v08JCOXF5FiQU5') DeleteData=1.
IF (ResponseId='R_w1awFvxnxs21zDb') DeleteData=1.
IF (ResponseId='R_sApawrhQLdXs41z') DeleteData=1.
EXECUTE.

* Identify Duplicate WorkerIDs.
SORT CASES BY WorkerID(A).
MATCH FILES
  /FILE=*
  /BY WorkerID
  /FIRST=PrimaryFirst
  /LAST=PrimaryLast.
DO IF (PrimaryFirst).
COMPUTE  Duplct=1-PrimaryLast.
ELSE.
COMPUTE  Duplct=Duplct+1.
END IF.
LEAVE  Duplct.
FORMATS  Duplct (f7).
COMPUTE  InDupGrp=Duplct>0.
SORT CASES InDupGrp(D).
MATCH FILES
  /FILE=*
  /DROP=PrimaryLast InDupGrp.
VARIABLE LABELS  PrimaryFirst 'Indicator of each first matching case as Primary' Duplct 
    'Sequential count of matching cases'.
VALUE LABELS  PrimaryFirst 0 'Duplicate Case' 1 'Primary Case'.
VARIABLE LEVEL  PrimaryFirst (ORDINAL) /Duplct (SCALE).
FREQUENCIES VARIABLES=PrimaryFirst Duplct.
*FILTER  BY PrimaryFirst.
EXECUTE.

FILTER OFF.



NUMERIC DeleteIndiv (F1).
VARIABLE LABELS DeleteIndiv 'Delete on individual basis'.
EXECUTE.

*Worker who took the survey twice and, when asked,
*indicated the first time through was probably the most valid.
IF (WorkerID = '[ID removed for confidentiality]' & ResponseID = 'R_1Nku0ILvgGfNL2x') DeleteIndiv=1.
EXECUTE.

*Worker who did not agree to participate (shows up as Finished, but duration was 80 secs).
IF (WorkerID = '[ID removed for confidentiality]' & ResponseID = 'R_1lh2phnExAJE929') DeleteIndiv=1.
EXECUTE.

*Worker who took the survey twice, still unclear how they managed to do this.
*Deleting second instance based on manipulations checks and inspecting the data for consistent responses.
IF (WorkerID = '[ID removed for confidentiality]' & ResponseID = 'R_3p9yJ4QApybJxRt') DeleteIndiv=1.
EXECUTE.

FREQUENCIES VARIABLES=DeleteIndiv Female
  /ORDER=ANALYSIS.





**************************************************.
******* COMMENTS AND PILOT Qs *********.
**************************************************.

*The following data were removed due to the comments indicating they did not 
read or did not fully comprehend the vignette instructions.
R_QnoA8jskiiwkXV7     "the fact that I was going to sleep with a random guy I barely knew, and was not in a relationship with"
R_31mzfrnlMmC2Dhy   "is he your friend or boyfriend? and are we exclusive?"
R_2fm1tTKQiqy3Nf9     "not attracted to women" + all vignette responses were 0.


NUMERIC DeleteCom (F1).
VARIABLE LABELS DeleteCom 'Delete those whose comments indicated they did not understand or read the inst'.
IF (ResponseId='R_QnoA8jskiiwkXV7') DeleteCom=1.
IF (ResponseId='R_31mzfrnlMmC2Dhy') DeleteCom=1.
IF (ResponseId='R_2fm1tTKQiqy3Nf9') DeleteCom=1.
EXECUTE.
FREQUENCIES VARIABLES=DeleteCom. 



*Looking at survey experiences and pilot questions.
DATASET ACTIVATE DataSet1.
FREQUENCIES VARIABLES=SurvExp_1 SurvExp_2 SurvExp_3 SurvExp_4 SurvExp_5 P1 P1b P2 P2a P3 P4 P4a 
    P5
  /ORDER=ANALYSIS.

*Checking for those who rated the vignettes as extremely unbelievable.
*NUMERIC CheckPQ1 (F1).
*VARIABLE LABELS CheckPQ1 'Checking those who rated the vignettes as extremely unbelievable'.

*IF (P1=1) CheckPQ1=1.
*IF (P1 >1) CheckPQ1=0.
*EXECUTE.

*FREQUENCIES VARIABLES P1 CheckPQ1.


FREQUENCIES VARIABLES=P1 P2 P3 P4 P5
  /ORDER=ANALYSIS.

*Checking for those who rated the vignette instructions as extremely unclear.
*NUMERIC CheckPQ2 (F1).
*VARIABLE LABELS CheckPQ2 'Check those who rated the vignettes as extremely unclear'.

*IF (P2=1) CheckPQ2=1.
*IF (P2 >1) CheckPQ2=0.
*EXECUTE.
*FREQUENCIES VARIABLES P2 CheckPQ2.

*None said the vignettes were "extremely" difficult to differentiate between.

*Check those who rated the vignette information as far too little?  Decided aginst this.
*NUMERIC CheckPQ4 (F1).

*IF (P4=7) CheckPQ4=1.
*IF (P4<7) CheckPQ4=0.
*EXECUTE.
*FREQUENCIES VARIABLES P4 CheckPQ4.



**************************************************.
********* EXCLUSION CRIT*ERIA ***********.
**************************************************.
*Deleting those who clearly lied about their age in the first screening HIT.
NUMERIC DeleteAge (F1).

If Age > 28 DeleteAge=1.
If Age > 28 DeleteAge=0.
EXECUTE.



SORT CASES  BY Female.
SPLIT FILE LAYERED BY Female.
FREQUENCIES VARIABLES=Age DeleteAge
  /ORDER=ANALYSIS.


*Deletes all other cases permanently.
*SELECT IF DeleteAge=0.

*******************************************.
*************** OTHER ******************.
*******************************************.

*Marking workers who did not submit the code to Mturk (perhaps abandoned the HIT.
COMPUTE DidNotSubmit = 0.
VALUE LABELS DidNotSubmit 0 'Submitted' 1 'Did not submit to Mturk'.
EXECUTE.

IF (WorkerID = '[ID removed for confidentiality]') DidNotSubmit=1.
EXECUTE.

FREQUENCIES VARIABLES=DidNotSubmit
  /ORDER=ANALYSIS.



SPLIT FILE OFF.

FREQUENCIES VARIABLES=Finished Rejected Delete Female
  /ORDER=ANALYSIS.



**************************************************.
*************** DUPLICATES *****************.
**************************************************.
*CHECKING FOR DUPLICATE RESPONSE IDs.
* Identify Duplicate Cases.
SORT CASES BY ResponseId(A).
MATCH FILES
  /FILE=*
  /BY ResponseId
  /FIRST=PrimaryFirst
  /LAST=PrimaryLast.
DO IF (PrimaryFirst).
COMPUTE  Duplct=1-PrimaryLast.
ELSE.
COMPUTE  Duplct=Duplct+1.
END IF.
LEAVE  Duplct.
FORMATS  Duplct (f7).
MATCH FILES
  /FILE=*
  /DROP=PrimaryFirst PrimaryLast.
VARIABLE LABELS  Duplct 'Sequential count of matching cases'.
VARIABLE LEVEL  Duplct (SCALE).
FREQUENCIES VARIABLES=Duplct.
EXECUTE.
*NO DUPLICATE RESP IDS AS OF 5/20/19.


*RECODE Delete (0=1) (1=0) INTO Keep.
*VARIABLE LABELS Keep 'Keep'.
*EXECUTE.
*VALUE LABELS Keep 0 'Remove' 1 'Keep'.

*FREQUENCIES VARIABLES=Keep.
*EXECUTE.
*FILTER BY Keep.

*RECODE Rejected (SYSMIS=0) (MISSING=0) (0=1) (1=1) INTO Delete.
*VARIABLE LABELS  Delete 'Delete this case'.
*EXECUTE.
*VALUE LABELS Delete 0 'No' 1 'Delete'.




*********************************************************.
******* SUM / ANY DELETE VARIABLES *********.
*********************************************************.
FILTER OFF.
COMPUTE DeleteSum=sum.1(DeleteOptOut,
DeleteProg, 
DeleteAge,
DeleteTestRun, 
DeleteIndiv,
DeleteAttn, 
DeleteInst, 
DeleteData,
DeleteCom).
EXECUTE.
FREQUENCIES VARIABLES DeleteSum.

SORT CASES  BY Sample.
SPLIT FILE LAYERED BY Sample.
FREQUENCIES VARIABLES DeleteSum.

FREQUENCIES VARIABLES DeleteProg.
FREQUENCIES VARIABLES DeleteAge.
FREQUENCIES VARIABLES DeleteTestRun.
FREQUENCIES VARIABLES DeleteAttn.
FREQUENCIES VARIABLES DeleteInst.
FREQUENCIES VARIABLES DeleteCom.
FREQUENCIES VARIABLES DeleteData.
*FREQUENCIES VARIABLES CheckPQ1.
*FREQUENCIES VARIABLES CheckPQ2.
FREQUENCIES VARIABLES DeleteSum.


FREQUENCIES VARIABLES Rejected.


*****************************************************.
******* DELETE AND COUNT CASES *********.
*****************************************************.
*SELECT IF DeleteProg=0.
FREQUENCIES VARIABLES DeleteProg.

*SELECT IF DeleteTestRun=0.

COMPUTE DeleteProgTestRunOpt=sum.1(DeleteProg, DeleteTestRun, DeleteOptOut).
EXECUTE.
FREQUENCIES VARIABLES DeleteProgTestRunOpt.

RECODE DeleteProgTestRunOpt (0=1) (1=0) INTO Completed.
EXECUTE.
FREQUENCIES VARIABLES Completed.

FILTER BY Completed.

FILTER OFF.
SELECT IF Valid=1.

RECODE DeleteSum (0=0) (SYSMIS=SYSMIS) (ELSE=1) INTO DeleteAny.
VALUE LABELS DeleteAny 1 'Delete' 0 'Do not delete'.
EXECUTE.
VARIABLE LABELS DeleteAny 'Delete on at least one variable'.
FREQUENCIES VARIABLES DeleteSum DeleteAny.

FILTER OFF.



RECODE DeleteAny (1=0) (0=1) INTO Valid.
VALUE LABELS Valid 1 'Valid' 0 'Not valid'.
EXECUTE.
VARIABLE LABELS Valid 'Filter variable for valid data'.
FREQUENCIES VARIABLES DeleteSum DeleteAny Valid.


SORT CASES  BY Sample.
SPLIT FILE LAYERED BY Sample.
FREQUENCIES VARIABLES DeleteSum.


FREQUENCIES VARIABLES DeleteAge.
FREQUENCIES VARIABLES DeleteAttn.
FREQUENCIES VARIABLES DeleteInst.
FREQUENCIES VARIABLES DeleteCom.
FREQUENCIES VARIABLES DeleteData.
FREQUENCIES VARIABLES DeleteIndiv.

FREQUENCIES VARIABLES DeleteSum DeleteAny.

SPLIT FILE OFF.
FREQUENCIES VARIABLES DeleteSum.



RECODE DeleteAny (1=0) (0=1) INTO Valid.
VALUE LABELS Valid 1 'Valid' 0 'Not valid'.
EXECUTE.
VARIABLE LABELS Valid 'Filter variable for valid data'.
FREQUENCIES VARIABLES DeleteSum DeleteAny Valid.


FILTER BY Valid.


SORT CASES  BY Sample.
SPLIT FILE LAYERED BY Sample.
FREQUENCIES VARIABLES Gender1 GenderMWN GenderMW.

RECODE GenderMWN (1=1) (2=2) (ELSE=SYSMIS) INTO GenderMW.
VALUE LABELS GenderMW 1 'Men' 2 'Women'.
EXECUTE.
VARIABLE LABELS GenderMW 'GenderMW'.





















*______________________________________________________________________________________________________________.

********************************************************************************************************************************************************.
********************************************************************************************************************************************************.
******************************************************* DEMOGRAPHICS / MEASURES **********************************************************.
********************************************************************************************************************************************************.
********************************************************************************************************************************************************.
*______________________________________________________________________________________________________________.












************************************************************************************************************************************.
************************************************************************************************************************************.
******************************************************  DEMOGRAPHICS *******************************************************.
************************************************************************************************************************************.
************************************************************************************************************************************.
*DEMOGRAPHICS.
*_____.


*If necessary:.
FILTER OFF.
SPLIT FILE OFF.


SORT CASES  BY Female.
SPLIT FILE LAYERED BY Female.



******************************************************************.
**************************  AGE  *******************************.
******************************************************************.
*AGE.
*_____.

*If necessary:.
SPLIT FILE OFF.

SORT CASES  BY Sample Female.
SPLIT FILE LAYERED BY Sample Female.

DESCRIPTIVES VARIABLES=Age
  /STATISTICS=MEAN STDDEV MIN MAX.


SORT CASES  BY Female.
SPLIT FILE LAYERED BY Female.
DESCRIPTIVES VARIABLES=Age
  /STATISTICS=MEAN STDDEV MIN MAX.





********************************************************************.
*******************  RACE/ETHNICITY  *************************.
********************************************************************.
*RACE/ETHNICITY.
*_____.


FREQUENCIES VARIABLES=RaceEthn_1 TO RaceEthn_8
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN MEDIAN MODE
  /ORDER=ANALYSIS.

COMPUTE RaceSum=sum.1(RaceEthn_1 TO RaceEthn_8).
EXECUTE.
VARIABLE LABELS RaceSum 'RaceSum'.

FREQUENCIES VARIABLES=RaceSum
  /ORDER=ANALYSIS.

SORT CASES BY RaceSum(A).

*Recoding new variables to combine them into one variable with corresponding codes.
RECODE RaceEthn_1 (1=1) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO RaceEthn1_AmIndian.
VARIABLE LABELS  RaceEthn1_AmIndian 'R/E: American Indian'.
EXECUTE.

RECODE RaceEthn_2 (1=2) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO RaceEthn2_Asian.
VARIABLE LABELS  RaceEthn2_Asian 'R/E: Asian'.
EXECUTE.

RECODE RaceEthn_3 (1=3) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO RaceEthn3_Black.
VARIABLE LABELS  RaceEthn3_Black 'R/E: Black'.
EXECUTE.

RECODE RaceEthn_4 (1=4) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO RaceEthn4_Hispanic.
VARIABLE LABELS  RaceEthn4_Hispanic 'R/E: Hispanic'.
EXECUTE.

RECODE RaceEthn_5 (1=5) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO RaceEthn5_White.
VARIABLE LABELS  RaceEthn5_White 'R/E: White'.
EXECUTE.

RECODE RaceEthn_6 (1=6) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO RaceEthn6_Multiracial.
VARIABLE LABELS  RaceEthn6_Multiracial 'R/E: Multiracial'.
EXECUTE.

RECODE RaceEthn_7 (1=7) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO RaceEthn7_Describe.
VARIABLE LABELS  RaceEthn7_Describe 'R/E: Describe'.
EXECUTE.

RECODE RaceEthn_8 (1=8) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO RaceEthn8_NoAnswer.
VARIABLE LABELS  RaceEthn8_NoAnswer 'R/E: NoAnswer'.
EXECUTE.


IF  (RaceSum = 1) RaceEthn=sum.1(RaceEthn1_AmIndian TO RaceEthn8_NoAnswer).
VARIABLE LABELS  RaceEthn 'RaceCombined'.
EXECUTE.
VALUE LABELS RaceEthn 1 'American Indian or Native American' 2 'Asian American or Pacific Islander' 
    3 'Black or African American' 4 'Hispanic or Latino/Spanish origin' 5 'White/Caucasian' 6 'Bi/Multiracial or Multiple categories' 
    7 'Prefer to describe in own words' 8 'Prefer not to answer'.
IF  (RaceSum  >  1) RaceEthn=6.
EXECUTE.
*NOTE: It may ask if you want to change the variable; say continue -- it shouldn't change the rest of the scores.
*NOTE: Some identified multiple race/ethn categories, yet did not identify as bi/multiracial. May not be
the most appropriate to lump them in with "multiracial" if they didn't identify in that way. fyi.


*Checking the Prefer to Describes.
FREQUENCIES VARIABLES=RaceEthn RaceEthn_7_TEXT
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN MEDIAN MODE
  /ORDER=ANALYSIS.


*DELETE VARIABLES RaceEthn_1 RaceEthn_2 RaceEthn_3 RaceEthn_4 RaceEthn_5 RaceEthn_6
    RaceEthn_7 RaceEthn_8 RaceEthn1_AmIndian RaceEthn2_Asian RaceEthn3_Black RaceEthn4_Hispanic
    RaceEthn5_White RaceEthn6_Multiracial RaceEthn7_Describe RaceEthn8_NoAnswer
    RaceSum
    .












********************************************************************.
*******************  GENDER IDENTITY  ***********************.
********************************************************************.
*GENDER IDENTITY.
*_____.


FREQUENCIES VARIABLES=Gender1_1 TO Gender1_6
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN MEDIAN MODE
  /ORDER=ANALYSIS.

COMPUTE Gender1Sum=sum.1(Gender1_1 TO Gender1_6).
EXECUTE.
VARIABLE LABELS Gender1Sum 'Gender1Sum'.

FREQUENCIES VARIABLES=Gender1Sum
  /ORDER=ANALYSIS.

SORT CASES BY Gender1Sum(D).



*Recoding new variables to combine them into one variable with corresponding codes.
RECODE Gender1_1 (1=1) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO Gender1_1Man.
VARIABLE LABELS  Gender1_1Man 'G1: Man'.
EXECUTE.

RECODE Gender1_2 (1=2) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO Gender1_2Woman.
VARIABLE LABELS  Gender1_2Woman 'G1: Woman'.
EXECUTE.

RECODE Gender1_3 (1=3) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO Gender1_3Transgender.
VARIABLE LABELS  Gender1_3Transgender 'G1: Transgender'.
EXECUTE.

RECODE Gender1_4 (1=4) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO Gender1_4Agender.
VARIABLE LABELS  Gender1_4Agender 'G1: Agender'.
EXECUTE.

RECODE Gender1_5 (1=5) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO Gender1_5NonBinary.
VARIABLE LABELS  Gender1_5NonBinary 'G1: Nonbinary'.
EXECUTE.

RECODE Gender1_6 (1=6) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO Gender1_6Describe.
VARIABLE LABELS  Gender1_6Describe 'G1: Prefer to describe in own words'.
EXECUTE.

RECODE Gender1_7 (1=7) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO Gender1_7NoAnswer.
VARIABLE LABELS  Gender1_7NoAnswer 'G1: NoAnswer'.
EXECUTE.


IF  (Gender1Sum = 1) Gender1=sum.1(Gender1_1Man TO Gender1_7NoAnswer).
VARIABLE LABELS  Gender1 'Gender1 Combined'.
EXECUTE.

IF  (Gender1Sum  >  1) Gender1=8.
EXECUTE.

VALUE LABELS Gender1 1 'Man' 2 'Woman' 3 'Transgender' 4 'Agender' 5 'Nonbinary' 
    6 'Prefer to describe' 7 'Prefer not to answer' 8 'Multiple'.



SORT CASES  BY Sample.
SPLIT FILE LAYERED BY Sample.

FREQUENCIES VARIABLES=Gender1 Gender2
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN MEDIAN MODE
  /ORDER=ANALYSIS.

NUMERIC GenderMWN (F1).
VALUE LABELS GenderMWN 1 'Men' 2 'Women' 3 'Nonbinary'.

IF (Gender2 = 1) GenderMWN=1.
IF (Gender2 = 2) GenderMWN=2.
IF (Gender2 = 3 OR Gender2 = 4) GenderMWN=3.
IF (Gender1 = 1) GenderMWN=1.
IF (Gender1 = 2) GenderMWN=2.
EXECUTE.

RECODE GenderMWN (1=1) (2=2) (ELSE=SYSMIS) INTO GenderMW.
VARIABLE LABELS GenderMW 'GenderMW'.
EXECUTE.
VALUE LABELS GenderMW 1 'Men' 2 'Women'.

SORT CASES  BY Sample.
SPLIT FILE LAYERED BY Sample.

FREQUENCIES VARIABLES=Gender1 Gender2 GenderMWN GenderMW
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN MEDIAN MODE
  /ORDER=ANALYSIS.


RECODE GenderMWN (1=-1) (2=1) INTO GenderCC.
VALUE LABELS GenderCC -1 'Men' 1 'Women'.
EXECUTE.
VARIABLE LABELS GenderCC 'Gender contrast (-1m, 1w)'.



*DELETE VARIABLES 
Gender1_1 TO Gender1_6 
Gender1_1Man TO Gender1_7NoAnswer.






********************************************************************.
****************  EDUCATION/EMPLOY  ***********************.
********************************************************************.
*EDUCATION/EMPLOYMENT
STUDENT STATUS, EMPLOYMENT, AND EDUCATION.
*_____.



SORT CASES  BY Sample Female.
SPLIT FILE LAYERED BY Sample Female.


SORT CASES  BY Sample.
SPLIT FILE LAYERED BY Sample.

FREQUENCIES VARIABLES=Student Educ MomEd DadEd
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN MEDIAN MODE
  /ORDER=ANALYSIS.


FREQUENCIES VARIABLES=Employ_1 TO Employ_7 Employ_6_TEXT Employ_7_TEXT
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN MEDIAN MODE
  /ORDER=ANALYSIS.



COMPUTE EmploySum=sum.1(Employ_1 TO Employ_7).
EXECUTE.
VARIABLE LABELS EmploySum 'EmploySum'.

FREQUENCIES VARIABLES=EmploySum
  /ORDER=ANALYSIS.

SORT CASES BY EmploySum(D).



*Recoding new variables to combine them into one variable with corresponding codes.
RECODE Employ_1 (1=1) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO Employ_1FTOut.
VARIABLE LABELS  Employ_1FTOut 'Employ: FTOut'.
EXECUTE.

RECODE Employ_2 (1=2) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO Employ_2PTOut.
VARIABLE LABELS  Employ_2PTOut 'Employ: PTOut'.
EXECUTE.

RECODE Employ_3 (1=3) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO Employ_3FTinHome.
VARIABLE LABELS  Employ_3FTinHome 'Employ: FTinHome'.
EXECUTE.

RECODE Employ_4 (1=4) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO Employ_4PTinHome.
VARIABLE LABELS  Employ_4PTinHome 'Employ: PTinHome'.
EXECUTE.

RECODE Employ_5 (1=5) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO Employ_5NotWorking.
VARIABLE LABELS  Employ_5NotWorking 'Employ: NotWorking'.
EXECUTE.

RECODE Employ_6 (1=6) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO Employ_6Describe.
VARIABLE LABELS  Employ_6Describe 'Employ: Prefer to describe in own words'.
EXECUTE.

RECODE Employ_7 (1=7) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO Employ_7Other.
VARIABLE LABELS  Employ_7Other 'Employ: Other'.
EXECUTE.


IF  (EmploySum = 1) Employ=sum.1(Employ_1FTOut TO Employ_7Other).
VARIABLE LABELS  Employ 'Employ Combined'.
EXECUTE.
IF  (EmploySum  >  1) Employ=8.
EXECUTE.
VALUE LABELS Employ 1 'FTOut' 2 'PTOut' 3 'FTinHome' 4 'PTinHome' 5 'NotWorking' 
    6 'Prefer to describe' 7 'Other' 8 'Multiple' 9 'Full TIme' 10 'Part time'.


FREQUENCIES VARIABLES=Employ
  /ORDER=ANALYSIS.


*NOTE: A few from the college sample indicated they were a full-time student but working part time; coded as "Part time".

*COMBINING FT and PT:.
*If 1 was chosen and either FT in home or FT out of hom, coding as "Full time".
IF  (EmploySum = 1 & (Employ_1 = 1 OR Employ_3 = 1)) Employ =9.
EXECUTE.
*If 2 were chosen and: Employed FT out of home and FT in home, coding as "Full time".
IF  (EmploySum = 2 & Employ_1 = 1 & Employ_3 = 1) Employ =9.
EXECUTE.

*If 1 was chosen and either PT in home or PT out of hom, coding as "Part time".
IF  (EmploySum = 1 & (Employ_2 = 1 OR Employ_4 = 1)) Employ =10.
EXECUTE.
*If 2 were chosen and: Employed PT out of hom and PT in home, coding as "Part time".
IF  (EmploySum = 2 & Employ_2 = 1 & Employ_4 = 1) Employ =10.
EXECUTE.

*If 2 were chosen: NotWorking and PTinhome, recoding as "Part time".
IF  (EmploySum = 2 & Employ_5 = 1 & Employ_4 = 1) Employ =10.
EXECUTE.


FREQUENCIES VARIABLES=Employ
  /ORDER=ANALYSIS.

*DELETE VARIABLES
Employ_1 TO Employ_7
EmploySum
Employ_1FTOut TO Employ_7Other
.





**********************************************************************.
******************  SEXUAL ORIENTATION  *********************.
**********************************************************************.
*SEXUAL ORIENTATION.
*_____.


FREQUENCIES VARIABLES=SexOrient1_1 TO SexOrient1_10
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN MEDIAN MODE
  /ORDER=ANALYSIS.

COMPUTE SexOrient1Sum=sum.1(SexOrient1_1 TO SexOrient1_10).
EXECUTE.
VARIABLE LABELS SexOrient1Sum 'SexOrient1Sum'.

FREQUENCIES VARIABLES=SexOrient1Sum
  /ORDER=ANALYSIS.



FREQUENCIES VARIABLES=SexOrient1Sum
  /ORDER=ANALYSIS.


SORT CASES BY SexOrient1Sum(D).


*Recoding new variables to combine them into one variable with corresponding codes.
RECODE SexOrient1_1 (1=1) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO SexOrient1_1Hetero.
VARIABLE LABELS  SexOrient1_1Hetero 'Exclusively Heterosexual'.
EXECUTE.

RECODE SexOrient1_2 (1=2) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO SexOrient1_2MostlyHet.
VARIABLE LABELS  SexOrient1_2MostlyHet 'Mostly Heterosexual'.
EXECUTE.

RECODE SexOrient1_3 (1=3) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO SexOrient1_3Bi.
VARIABLE LABELS  SexOrient1_3Bi 'Bisexual'.
EXECUTE.

RECODE SexOrient1_4 (1=4) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO SexOrient1_4MostlyGayLes.
VARIABLE LABELS  SexOrient1_4MostlyGayLes 'Mostly Gay or Lesbian'.
EXECUTE.

RECODE SexOrient1_5 (1=5) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO SexOrient1_5GayLes.
VARIABLE LABELS  SexOrient1_5GayLes 'Exclusively Gay or Lesbian'.
EXECUTE.

RECODE SexOrient1_6 (1=6) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO SexOrient1_6Pansexual.
VARIABLE LABELS  SexOrient1_6Pansexual 'Pansexual'.
EXECUTE.

RECODE SexOrient1_7 (1=7) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO SexOrient1_7Asexual.
VARIABLE LABELS  SexOrient1_7Asexual 'Asexual'.
EXECUTE.

RECODE SexOrient1_8 (1=8) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO SexOrient1_8Describe.
VARIABLE LABELS  SexOrient1_8Describe 'Prefer to describe in own words'.
EXECUTE.

RECODE SexOrient1_9 (1=9) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO SexOrient1_9Unsure.
VARIABLE LABELS  SexOrient1_9Unsure 'Unsure'.
EXECUTE.

RECODE SexOrient1_10 (1=10) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO SexOrient1_10NoAnswer.
VARIABLE LABELS  SexOrient1_10NoAnswer 'NoAnswer'.
EXECUTE.


IF  (SexOrient1Sum = 1) SexOrient=sum.1(SexOrient1_1Hetero TO SexOrient1_10NoAnswer).
VARIABLE LABELS  SexOrient 'SexOrient Combined'.
EXECUTE.
IF  (SexOrient1Sum  >  1) SexOrient=11.
EXECUTE.
VALUE LABELS SexOrient 1 'Exclusively Heterosexual' 2 'Mostly Heterosexual' 
    3 'Bisexual' 4 'Mostly Gay or Lesbian' 5 'Exclusively Gay or Lesbian' 6 'Pansexual/Fluid' 
    7 'Asexual' 8 'Prefer to describe' 9 'Unsure' 10 'Prefer not to answer' 11 'Multiple'
    12 'Other'.


FREQUENCIES VARIABLES=SexOrient
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN MEDIAN MODE
  /ORDER=ANALYSIS.


SORT CASES BY SexOrient(A).

COMPUTE SexOrient1a = SexOrient.
EXECUTE.
VALUE LABELS SexOrient1a 1 'Exclusively Heterosexual' 2 'Mostly Heterosexual' 
    3 'Bisexual' 4 'Mostly Gay or Lesbian' 5 'Exclusively Gay or Lesbian' 6 'Pansexual' 
    7 'Asexual/DemiSexual' 8 'Prefer to describe' 9 'Unsure' 10 'Prefer not to answer' 11 'Multiple'
    12 'Other' 13 'Queer'.

*If sex orient chosen was both Exclusively Heterosexual and Mostly Heterosexual, (AND ONLY 2 Chosen total)
recoding so SexOrient1a is Mostly Heterosexual.
IF  (SexOrient1Sum = 2 & SexOrient1_1Hetero = 1 & SexOrient1_2MostlyHet = 2) SexOrient1a=2.
EXECUTE.

*If sex orient chosen was both Mostly Heterosexual and Bisexual,(AND ONLY 2 Chosen total)
recoding so SexOrient1a is Bisexual.
IF  (SexOrient1Sum = 2 & SexOrient1_3Bi = 3 & SexOrient1_2MostlyHet = 2) SexOrient1a=3.
EXECUTE.

*If sex orient chosen was both Bisexual and Mostly Gay/Lesbian, (AND ONLY 2 Chosen total)
recoding so SexOrient1a is Bisexual.
IF  (SexOrient1Sum = 2 & SexOrient1_3Bi = 3 & SexOrient1_4MostlyGayLes = 4) SexOrient1a=3.
EXECUTE.

*If sex orient chosen was both Mostly Gay/Lesbian and Exclusively Gay/Lescbian, (AND ONLY 2 Chosen total)
recoding so SexOrient1a is Mostly Gay/Les.
IF  (SexOrient1Sum = 2 & SexOrient1_4MostlyGayLes = 4 & SexOrient1_5GayLes = 5) SexOrient1a=4.
EXECUTE.


FREQUENCIES VARIABLES SexOrient1a.


*DESCRIBES AND MULTIPLES - Changing to codes.

*Participant who selected Exclusively hetero and described "Was never with a woman so I also don't know" - 
changing from Multiple to Exclusively hetero.
IF  (ResponseId = 'R_cSHLPmPcCMcyW9r' & Sample = 1) SexOrient1a=1.
EXECUTE.

*Participant who selected Asexual and described "Mostly asexual but with feelings of muscle worship, mostly towards men" -
changing from Multiple to Asexual.
IF  (ResponseId = 'R_2QtZpeJkywegXvX' & Sample = 1) SexOrient1a=7.
EXECUTE.

*Participant who selected Describe only: "Demi-sexual (leaning more towards asexual)" -
changing from Describe to Asexual.
IF  (ResponseId = 'R_27szbVkLqrSV30k' & Sample = 1) SexOrient1a=7.
EXECUTE.

*R_1ptJ1ToNjzAeam7: Describe ("demisexual").
IF  (ResponseId = 'R_1ptJ1ToNjzAeam7') SexOrient1a=7.
EXECUTE.

*R_2dMv0q3lqRcBXhN: selected: Exclusively Heterosexual + Describe ("Demisexual").
IF  (ResponseId = 'R_2dMv0q3lqRcBXhN') SexOrient1a=7.
EXECUTE.

*Exclusively Het + Asexual (00s for all SexOrient2s): R_r7Pe0TPyAGRNVgl.
IF  (ResponseId = 'R_r7Pe0TPyAGRNVgl') SexOrient1a=7.
EXECUTE.

*R_22RnQHai9L2EFGX: Describe ("Grey Asexual/Demisexual").
IF  (ResponseId = 'R_22RnQHai9L2EFGX') SexOrient1a=7.
EXECUTE.


*Coded as Mostly Heterosexual.
IF (RespID = 'R_1LnA4PtXvoFa6pW') SexOrient1a=2.
    *"I only have sex with women, but I have fantasized about having sex with men who look like women".
IF (RespID = 'R_3DhYQF094KtOvAw') SexOrient1a=2.
     *"Mostly heterosexual, but I've had an experience with a man before.".
EXECUTE.



*Descriptions including the following, For both samples:
Asexual: 4  =  College: 2   Mturk: 2
Demisexual: 4  = College: 1    Mturk: 3
Fluid:2  = College: 1   Mturk: 1
Grey/Gray:3  = College: 1   Mturk: 2
Pansexual: 1  = College: 1   Mturk: 0
Queer: 4  = College: 2   Mturk: 2
Other details: 5  = College: 2    Mturk: 3.


*Participants who selected Describe only and entered Queer -
changing from Describe to Queer.
IF  (RespId = 'R_2h7l953qnpCyK77') SexOrient1a=13.
IF  (RespId = 'R_cC6tqeHgaLTwkgx') SexOrient1a=13.
IF  (RespId = 'R_1obwF8huq8HPYME') SexOrient1a=13.
EXECUTE.



*Pansexual/Fluid.
IF (RespID = 'R_1rJSRffuGIlhCEP') SexOrient1a=6.
IF (RespID = 'R_1BS3Qu9DEUXcvQ8') SexOrient1a=6.
IF (RespID = 'R_28CVeHeHHwqGBXY') SexOrient1a=6.
IF (RespID = 'R_3Rw89pJkIZqJwjS') SexOrient1a=6.
     *Multiple: MostlyHet + Pansexual: --> Pansexual.
IF (RespID = 'R_2Bb4mJ2RDpvxnwM') SexOrient1a=6.
     *Multiple: Bisexual + MostlyGayLes + Pansexual --> Pansexual.
IF (RespID = 'R_22DeCZ9hp5mSQ7m') SexOrient1a=6.
     *Multiple: Bisexual + MostlyHet + Pansexual --> Pansexual.
IF (RespID = 'R_3hux8PEhBubsJv7') SexOrient1a=6.
     *Multiple: Bisexual + Pansexual --> Pansexual.
EXECUTE.


*From Mturk sample (all the Describes):
everyone except cis men - 
selected : Bisexual + Mostly Gay or Lesbian + Pansexual + Describe

*Leaving as MULTIPLE or changing to it.
*R_u1RtSxxAuoWf2I9: Bisexual + Describe ("Grey-asexual") + Unsure



SORT CASES BY SexOrient1_8Describe(D) Sample(D).

SORT CASES  BY Female Sample.
SPLIT FILE LAYERED BY Female Sample.

SORT CASES  BY Sample.
SPLIT FILE LAYERED BY Sample.

FREQUENCIES VARIABLES= SexOrient1a SexOrient 
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN MEDIAN MODE
  /ORDER=ANALYSIS.


*DELETE VARIABLES
SexOrient1_1 TO SexOrient1_10
SexOrient1Sum
SexOrient1_1Hetero TO SexOrient1_10NoAnswer
.









**********************************************************************************.
*******************  PARTNER GENDER (DEDUCED) ***********************.
**********************************************************************************.
*PARTNER GENDER.
*_____.


*CREATING VARIABLE FOR PARTNER GENDER.

NUMERIC PartnerGender1 (F1).
VALUE LABELS PartnerGender1 1 'Man Partner' 2 'Woman Partner' 3 'Either' 4 'Neither/Indet'.
MISSING VALUES PartnerGender1 (4).

VARIABLE LABELS PartnerGender1 'PartnerGender1'.
EXECUTE.


IF (GenderMWN=1) & (SexOrient1a=1 OR SexOrient1a=2) PartnerGender1=2.
IF (GenderMWN=2) & (SexOrient1a=1 OR SexOrient1a=2) PartnerGender1=1.

IF (GenderMWN=1) & (SexOrient1a=4 OR SexOrient1a=5) PartnerGender1=1.
IF (GenderMWN=2) & (SexOrient1a=4 OR SexOrient1a=5) PartnerGender1=2.

IF SexOrient1a=3 PartnerGender1=3.
IF SexOrient1a=6 PartnerGender1=3.

IF GenderMWN=3 PartnerGender1=4.
IF (SexOrient1a >6) PartnerGender1=4.
EXECUTE.






*Alternate variable for Partner Gender based on much more than just gender and SexOrient1a -- also including 
what was reported for SexOrient2, and maybe other aspects as noted.
FREQUENCIES VARIABLES=Gender1 Gender2 SexOrient SexOrient1a PartnerOrient
  /ORDER=ANALYSIS.

RECODE SexOrient1a (1=1) (2=1) (4=2) (5=2) (3=3) (6=3) (7=4) 
                                    (8=4) (9=4) (10=4) (11=4) (12=4)
                                    INTO PartnerOrient.
VARIABLE LABELS PartnerOrient 'PartnerOrient'.
EXECUTE.
VALUE LABELS PartnerOrient 1 'DiffSex' 2 'SameSex' 3 'EitherSex' 4 'NeitherSex or Indeterminable'.


*Man + Trangender OR Man+Nonbinary --> Gender1 = Man, and Gender2=Man.
IF (Gender1Sum=2 & Gender1_1=1 & Gender1_5=1) Gender2=1.
IF (Gender1Sum=2 & Gender1_1=1 & Gender1_3=1) Gender2=1.
IF (Gender1Sum=2 & Gender1_1=1 & Gender1_5=1) Gender1=1.
IF (Gender1Sum=2 & Gender1_1=1 & Gender1_3=1) Gender1=1.
EXECUTE.

*Woan + Trangender OR Woman+Nonbinary --> Gender1 = Woman, and Gender2=Woman.
IF (Gender1Sum=2 & Gender1_2=1 & Gender1_5=1) Gender2=2.
IF (Gender1Sum=2 & Gender1_2=1 & Gender1_3=1) Gender2=2.
IF (Gender1Sum=2 & Gender1_2=1 & Gender1_5=1) Gender1=2.
IF (Gender1Sum=2 & Gender1_2=1 & Gender1_3=1) Gender1=2.
EXECUTE.



*Does the orientation specified match the pronouns they wanted for Sam, by gender?.
SORT CASES  BY Female.
SPLIT FILE LAYERED BY Female.
CROSSTABS
  /TABLES=Q33 BY PartnerOrient
  /FORMAT=AVALUE TABLES
  /CELLS=COUNT
  /COUNT ROUND CELL.
*For the most part, yes. A few hetero folks choosing same-sex Sam.


SORT CASES  BY Sample.
SPLIT FILE LAYERED BY Sample.
FREQUENCIES Q33.


NUMERIC PartnerGender (F1).
VALUE LABELS PartnerGender 1 'Man' 2 'Woman' 3 'Either' 4 'Neither or Indet'.

*Visually inspected sexual orientation, gender, and SexOrient2 values
 (sorted by Orientation, then Gender, then SexOrient2s)
 to confirm. See notes for outliers.
IF (SexOrient1a=1 & Gender1=2) PartnerGender=1.
IF (SexOrient1a=1 & Gender1=1) PartnerGender=2.
IF (SexOrient1a=2 & Gender1=5) PartnerGender=3.
     *One person identified as nonbinary, mostly het, Orient2 #s high for both men and women.
IF (SexOrient1a=2 & Gender1=2) PartnerGender=1.
     *2 women (Gender1) identified as Mostly Het, yet contradictory SexOrient2 #s.
IF (SexOrient1a=2 & Gender1=1) PartnerGender=2. 
     *Five men ID as Mostly het, did not enter number for SexOrient2 men.
IF (SexOrient1a=3 OR SexOrient1a=6) PartnerGender=3. 
     *Bisexual an Pansexual IDs folks' Orient2 #s made sense for the most part.
IF (SexOrient1a=4 & Gender1=2) PartnerGender=2. 
IF (SexOrient1a=4 & Gender1=1) PartnerGender=1. 
IF (SexOrient1a=5 & Gender1=2) PartnerGender=2. 
IF (SexOrient1a=5 & Gender1=1) PartnerGender=1. 
IF (SexOrient1a=7) PartnerGender=4. 
IF (SexOrient1a=9) PartnerGender=4.
EXECUTE.



*Individual codings based on SexOrient Description, gender id, and SexOrient2 values.

*Into men.
IF (RespID = 'R_2h7l953qnpCyK77') PartnerGender=1.
IF (RespID = 'R_2dMv0q3lqRcBXhN') PartnerGender=1.
EXECUTE.


*Into women.
IF (RespID = 'R_1LnA4PtXvoFa6pW') PartnerGender=2.
IF (RespID = 'R_3DhYQF094KtOvAw') PartnerGender=2.
IF (RespID = 'R_2AKIHyxFVFzrAet') PartnerGender=2.
IF (RespID = 'R_2qmx8cF2xJy4whT') PartnerGender=2.
IF (RespID = 'R_3Rw89pJkIZqJwjS') PartnerGender=2.
EXECUTE.



*Either.
IF (RespID = 'R_1ptJ1ToNjzAeam7') PartnerGender=3.
IF (RespID = 'R_22RnQHai9L2EFGX') PartnerGender=3.
IF (RespID = 'R_cC6tqeHgaLTwkgx') PartnerGender=3.
IF (RespID = 'R_1rJSRffuGIlhCEP') PartnerGender=3.
IF (RespID = 'R_1obwF8huq8HPYME') PartnerGender=3.
IF (RespID = 'R_1BS3Qu9DEUXcvQ8') PartnerGender=3.
IF (RespID = 'R_1rJSRffuGIlhCEP') PartnerGender=3.
IF (RespID = 'R_3hux8PEhBubsJv7') PartnerGender=3.
IF (RespID = 'R_2Bb4mJ2RDpvxnwM') PartnerGender=3.
IF (RespID = 'R_22DeCZ9hp5mSQ7m') PartnerGender=3.
EXECUTE.

*Neither or Indeterminable.
IF (RespID = 'R_u1RtSxxAuoWf2I9') PartnerGender=4.
IF (RespID = 'R_r7Pe0TPyAGRNVgl') PartnerGender=4.
EXECUTE.


RENAME VARIABLES
(GendRomP_1=GendRomP_1Men)
(GendRomP_2=GendRomP_2Women)
(GendRomP_3=GendRomP_3NB)
(GendRomP_4=GendRomP_4Desc1)
(GendRomP_5=GendRomP_5Desc2)
(GendRomP_6=GendRomP_6DUnkn)
(GendSexP_1=GendSexP_1Men)
(GendSexP_2=GendSexP_2Women)
(GendSexP_3=GendSexP_3NB)
(GendSexP_4=GendSexP_4Desc1)
(GendSexP_5=GendSexP_5Desc2)
(GendSexP_6=GendSexP_6Unkn)
.




SORT CASES  BY Sample.
SPLIT FILE LAYERED BY Sample.
FREQUENCIES VARIABLES=Gender1 Gender2 GenderMWN SexOrient SexOrient1a 
          PartnerOrient PartnerGender PartnerGender1 Q33
  /ORDER=ANALYSIS.












**************************************************************************.
*******************  RELATIONSHIP STATUS  ***********************.
**************************************************************************.
*REL STATUS.
*_____.

FREQUENCIES VARIABLES=CurrRel LDR
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN MEDIAN MODE
  /ORDER=ANALYSIS.

FREQUENCIES VARIABLES=CurrRel RelStat_1 RelStat_2 RelStat_3 RelStat_4 
    RelStat_5 RelStat_6 RelStat_7 RelStat_8 RelStat_8_TEXT LDR
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN MEDIAN MODE
  /ORDER=ANALYSIS.

COMPUTE RelStatSum=sum.1(RelStat_1 TO RelStat_8).
EXECUTE.

FREQUENCIES VARIABLES=RelStatSum
  /ORDER=ANALYSIS.

SORT CASES BY RelStat_8(D).

FREQUENCIES VARIABLES=RelStat_1 RelStat_2 RelStat_3 RelStat_4 RelStat_5 RelStat_6 RelStat_7 
    RelStat_8
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN MEDIAN MODE
  /ORDER=ANALYSIS.


*For those who picked both Seriously dating one person (RelStat_3) and Cohabiting (RelStat_5), combine the two?.

*Recoding new variables to combine them into one variable with corresponding codes.
RECODE RelStat_1 (1=1) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO RelStat_1Casual1.
VARIABLE LABELS  RelStat_1Casual1 'Casually dating 1'.
EXECUTE.

RECODE RelStat_2 (1=2) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO RelStat_2Casual2.
VARIABLE LABELS  RelStat_2Casual2 'Casually dating 2+'.
EXECUTE.

RECODE RelStat_3 (1=3) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO RelStat_3SrslyDat1.
VARIABLE LABELS  RelStat_3SrslyDat1 'Seriously dating 1'.
EXECUTE.

RECODE RelStat_4 (1=4) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO RelStat_4SrslyDat2.
VARIABLE LABELS  RelStat_4SrslyDat2 'Seriously dating 2+'.
EXECUTE.

RECODE RelStat_5 (1=5) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO RelStat_5Cohab.
VARIABLE LABELS  RelStat_5Cohab 'Cohabiting'.
EXECUTE.

RECODE RelStat_6 (1=6) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO RelStat_6Engaged.
VARIABLE LABELS  RelStat_6Engaged 'Engaged'.
EXECUTE.

RECODE RelStat_7 (1=7) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO RelStat_7Married.
VARIABLE LABELS  RelStat_7Married 'Married'.
EXECUTE.

RECODE RelStat_8 (1=8) (SYSMIS=SYSMIS) (MISSING=SYSMIS) INTO RelStat_8Describe.
VARIABLE LABELS  RelStat_8Describe 'Prefer to describe'.
EXECUTE.
*NOTE: For some, Describes were just an explanation of their single relationship status. Just look closely.

IF  (RelStatSum = 1) RelStat=sum.1(RelStat_1Casual1 TO RelStat_8Describe).
VARIABLE LABELS  RelStat 'Relationship Status'.
EXECUTE.
IF  (RelStatSum  >  1) RelStat=9.
EXECUTE.
VALUE LABELS RelStat 0 'Single' 1 'Casually dating one person' 2 'Casually dating more than one person' 
    3 'Seriously dating one person' 4 'Seriously dating more than one person' 5 'Cohabiting' 6 'Engaged' 
    7 'Married' 8 'Prefer to describe; Its complicated' 9 'Multiple' 10 'Other' 11 'Engaged and Cohabiting' 12 'Friends w Benefits'.

FREQUENCIES VARIABLES=RelStat
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN MEDIAN MODE
  /ORDER=ANALYSIS.


SORT CASES BY RelStat(A).

*Recoding those who put Single into the variable as nonmissing in their own category.
IF  (CurrRel = 2) RelStat=0.
EXECUTE.

*If Rel Stat was both Seriously Dating and Cohabiting, and no others were chosen
Recoding from Multiple to Cohabiting.
IF  (RelStatSum = 2 & RelStat_3SrslyDat1 = 3 & RelStat_5Cohab = 5) RelStat=5.
EXECUTE.


*If Rel Stat was both Engaged and Cohabiting, and no others were chosen
Recoding from Multiple to Cohabiting.
IF  (RelStatSum = 2 & RelStat_6Engaged = 6 & RelStat_5Cohab = 5) RelStat=11.
EXECUTE.


*If Rel Stat was both Married and Cohabiting, and no others were chosen
Recoding from Multiple to Married.
IF  (RelStatSum = 2 & RelStat_7Married = 7 & RelStat_5Cohab = 5) RelStat=7.
EXECUTE.



NUMERIC OpenRel (F1).
VARIABLE LABELS OpenRel 'Described Rel as Open'.
EXECUTE.
VALUE LABELS OpenRel 0 'Not open' 1 'Open'.

*The following were coded as "Open":
   *R_2eVlbD4tqfT5eZU:  "open relationship".
   *R_3RgYlOyqFvHqDnM:  "engaged to the person I'm living with, casually dating other partners with my fiance".
IF  (ResponseId = 'R_2eVlbD4tqfT5eZU') OpenRel=1.
IF  (ResponseId = 'R_3RgYlOyqFvHqDnM') OpenRel=1.
EXECUTE.


*Recoding to Single.
   *R_RPQhSX0K0Vl0mfT: "Just Broke Up".
   *R_1dEoU5q8tf5dz4R: "Single".
IF  (ResponseId = 'R_RPQhSX0K0Vl0mfT') RelStat=0.
IF  (ResponseId = 'R_1dEoU5q8tf5dz4R') RelStat=0.
EXECUTE.



*The following were coded as "Friends w Benefits":.
   *R_RODnEnmSX9X13oZ: "Friends with benefits".
   *R_2QrgqrXIELtrkBQ: "Friends with benifits".
   *R_1q3z2mvidlvNTUS: "Just broke up with one person but still participating in dating-like activities".
   *R_21A5SNKVBXavnec	We've had sex before, he and I both aren't looking for anything serious right now 
                                               and I used to date him, but we're kind of just having fun....Idk I'm complicated we're complicated 
                                               its all kind of complicated. Down below the number is inclusive to the time we dated and our casual sex now.
   *R_RIc3c9OzVmNpALD: "Casually having sex with one person--not really dating".
   *R_ReS6VFqnB5GMT9n: "Still in a sexual and supporting relationship with an ex-girlfriend, but we 
                                             both talk to others slightly (it causes some issues right now)".
IF  (ResponseId = 'R_RODnEnmSX9X13oZ') RelStat=12.
IF  (ResponseId = 'R_2QrgqrXIELtrkBQ') RelStat=12.
IF  (ResponseId = 'R_1q3z2mvidlvNTUS') RelStat=12.
IF  (ResponseId = 'R_21A5SNKVBXavnec') RelStat=12.
IF  (ResponseId = 'R_RIc3c9OzVmNpALD') RelStat=12.
IF  (ResponseId = 'R_ReS6VFqnB5GMT9n') RelStat=12.
EXECUTE.

*Recoding to Casually Dating One.
   *R_2489NiOgyaS6wHe: Casually Dating one person + Described "One person, open to more": Changing from Multiple to Casually Dating One.
   *R_2rJczx5YMWMypuF	Have gone on what might be described as "dates". Do not know other person's feelings.
IF  (ResponseId = 'R_2489NiOgyaS6wHe') RelStat=1.
IF  (ResponseId = 'R_2rJczx5YMWMypuF') RelStat=1.
EXECUTE.


*Recoding to Casually Dating Multiple.
   *R_1NsqSFvTnG6hgyR: "Love triangle, where I have to choose which person I want to date;
                                            I am incapable of casually dating more than one person".
IF  (ResponseId = 'R_1NsqSFvTnG6hgyR') RelStat=2.
EXECUTE.


*Recoding the following to Seriously Dating One:.
   *R_1QzosyayGDy8rKm: Seriously Dating One + Described: "long distance": Changing from Multiple to Seriously Dating One.
   *R_AhcybtnIAh7wBDb: Seriously Dating One + Cohab + Described "dating my neighbor so technically lives in the same household 
                                                                                         but we rent separate apartments (next to each other)":
                                                                                         Changing from Multiple to Seriously Dating One.
   *R_1ltVL3hQRRPOHkJ: "Have lived together in the past but not currently. Currently seriously dating.".
   *R_2eVlbD4tqfT5eZU: Seriously Dating One + Described "open relationship".
IF  (ResponseId = 'R_1QzosyayGDy8rKm') RelStat=3.
IF  (ResponseId = 'R_AhcybtnIAh7wBDb') RelStat=3.
IF  (ResponseId = 'R_1ltVL3hQRRPOHkJ') RelStat=3.
IF  (ResponseId = 'R_2eVlbD4tqfT5eZU') RelStat=3.
EXECUTE.



SORT CASES  BY Sample.
SPLIT FILE LAYERED BY Sample.

FREQUENCIES VARIABLES=CurrRel RelStat OpenRel
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN MEDIAN MODE
  /ORDER=ANALYSIS.








***************************************************************************.
*******************  RELATIONSHIP LENGTH  ***********************.
***************************************************************************.
*REL LENGTH.
*_____.


COMPUTE RelLenMTot=sum.1((NUMBER(RelLen_1, F2) * 12),NUMBER(RelLen_2, F5)).
EXECUTE.
VARIABLE LABELS RelLenMTot 'Rel Length in Months Total'.
*NOTE: ROUNDING UP FOR MONTHS; A FEW PUT '6.5' or "11.5' --> 7 and 12.
*NOTE: Will return ERRORS for all those with missing data (ie, not in a relatinshp); this is fine.

FREQUENCIES VARIABLES=RelLenMTot
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN MEDIAN MODE
  /HISTOGRAM
  /ORDER=ANALYSIS.

DESCRIPTIVES VARIABLES=RelLenMTot
  /STATISTICS=MEAN STDDEV MIN MAX.



***************************************************************************.
*ALL DEMOGS.
*_____.


*CAREFUL - female vs GenderMWN.
SORT CASES  BY Female.
SPLIT FILE LAYERED BY Female.




FREQUENCIES VARIABLES=Female Age RaceEthn Gender1 Gender2 GenderMWN SexOrient SexOrient1a CurrRel RelStat RelLenMTot LDR
  NumRomRel NumSexRel
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN MEDIAN MODE
  /ORDER=ANALYSIS.



SORT CASES  BY GenderMWN.
SPLIT FILE LAYERED BY GenderMWN.

DESCRIPTIVES VARIABLES=Age RelLenMTot NumRomRel NumSexRel
  /STATISTICS=MEAN STDDEV MIN MAX.




SORT CASES  BY GenderMWN.
SPLIT FILE LAYERED BY GenderMWN.

DESCRIPTIVES VARIABLES=Age RelLenMTot NumRomRel NumSexRel
  /STATISTICS=MEAN STDDEV MIN MAX.
























************************************************************************************************************************************.
************************************************************************************************************************************.
*********************************************************  MEASURES ***********************************************************.
************************************************************************************************************************************.
************************************************************************************************************************************.
*MEASURES.
*_____.


********************************************************************.
**************************  PANAS  ******************************.
********************************************************************.
*PANAS.
*_____.

COMPUTE PA=sum.5(PANAS_1, PANAS_3, PANAS_5, PANAS_8, PANAS_10).
COMPUTE NA=sum.5(PANAS_2, PANAS_4, PANAS_6, PANAS_7, PANAS_9).
EXECUTE.


FREQUENCIES VARIABLES=PA NA
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN
  /HISTOGRAM
  /ORDER=ANALYSIS.

RELIABILITY
  /VARIABLES=PANAS_1 PANAS_3 PANAS_5 PANAS_8 PANAS_10
  /SCALE('PA') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=PANAS_2 PANAS_4 PANAS_6 PANAS_7 PANAS_9
  /SCALE('NA') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.


SORT CASES  BY GenderMWN.
SPLIT FILE LAYERED BY GenderMWN.

SORT CASES  BY Sample.
SPLIT FILE LAYERED BY Sample.

RELIABILITY
  /VARIABLES=PANAS_1 PANAS_3 PANAS_5 PANAS_8 PANAS_10
  /SCALE('PA') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=PANAS_2 PANAS_4 PANAS_6 PANAS_7 PANAS_9
  /SCALE('NA') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

SPLIT FILE OFF.

*Checking that the presccored scales are the same as the syntax scored scales.
*Looks good as of June 2 2019.
CORRELATIONS
  /VARIABLES=SC11 PA SC12 NA  
  /PRINT=TWOTAIL NOSIG
  /MISSING=PAIRWISE.


********************************************************************.
**************************  TIPI   *********************************.
********************************************************************.
*TIPI.
*_____.


*﻿I see myself as: 
*1. _____ Extraverted, enthusiastic. *
*2. _____ Critical, quarrelsome. 
*3. _____ Dependable, self-disciplined. 
*4. _____ Anxious, easily upset. 
*5. _____ Open to new experiences, complex. 
*6. _____ Reserved, quiet. 
*7. _____ Sympathetic, warm. 
*8. _____ Disorganized, careless. 
*9. _____ Calm, emotionally stable.
*10. _____ Conventional, uncreative. TIPI
*1 disagree strongly -- 7 agree strongly.

*﻿TIPI scale scoring (‘‘R’’ denotes reverse-scored items): Extraversion: 1, 6R; Agreeableness: 2R, 7;
Conscientiousness; 3, 8R; Emotional Stability: 4R, 9; Openness to Experiences: 5, 10R.


*FIRST - CHECK that the reverse was not done previously:.
DESCRIPTIVES VARIABLES=TIPI_1 TIPI_2 TIPI_2R TIPI_3 TIPI_4 TIPI_4R TIPI_5 TIPI_6 TIPI_6R 
        TIPI_7 TIPI_8 TIPI_8R TIPI_9 TIPI_9R TIPI_10 TIPI_10R
  /STATISTICS=MEAN STDDEV MIN MAX.


*REVERSE-CODING.
RECODE TIPI_2 TIPI_4 TIPI_6 TIPI_8 TIPI_9 TIPI_10 (1=7) (2=6) (3=5) (4=4) (5=3) (6=2) (7=1) (SYSMIS=SYSMIS) 
    (MISSING=SYSMIS) INTO TIPI_2R TIPI_4R TIPI_6R TIPI_8R TIPI_9R TIPI_10R.
VARIABLE LABELS  TIPI_2R 'TIPI_2R' /TIPI_4R 'TIPI_4R' /TIPI_6R 'TIPI_6R' /TIPI_8R 'TIPI_8R' /TIPI_9R 'TIPI_9R' /TIPI_10R 'TIPI_10R'.
EXECUTE.

*Check the reverse coding was done correctly (or not done previously):.
DESCRIPTIVES VARIABLES=TIPI_1 TIPI_2 TIPI_2R TIPI_3 TIPI_4 TIPI_4R TIPI_5 TIPI_6 TIPI_6R 
        TIPI_7 TIPI_8 TIPI_8R TIPI_9 TIPI_9R TIPI_10 TIPI_10R
  /STATISTICS=MEAN STDDEV MIN MAX.

FREQUENCIES VARIABLES=TIPI_1 TIPI_2 TIPI_2R TIPI_3 TIPI_4 TIPI_4R TIPI_5 TIPI_6 TIPI_6R 
        TIPI_7 TIPI_8 TIPI_8R TIPI_9 TIPI_9R TIPI_10 TIPI_10R
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN
  /HISTOGRAM
  /ORDER=ANALYSIS.

COMPUTE TIPI_Extrav=sum.2(TIPI_1, TIPI_6R).
COMPUTE TIPI_Agree=sum.2(TIPI_2R, TIPI_7).
COMPUTE TIPI_Consc=sum.2(TIPI_3, TIPI_8R).
COMPUTE TIPI_Neuro=sum.2(TIPI_4, TIPI_9R).
COMPUTE TIPI_EmotStab=sum.2(TIPI_4R, TIPI_9).
COMPUTE TIPI_Openn=sum.2(TIPI_5, TIPI_10R).
EXECUTE.

FREQUENCIES VARIABLES=TIPI_Extrav TIPI_Agree TIPI_Consc TIPI_Neuro TIPI_EmotStab
       TIPI_Openn
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN
  /HISTOGRAM
  /ORDER=ANALYSIS.


SORT CASES  BY GenderMWN.
SPLIT FILE LAYERED BY GenderMWN.

SPLIT FILE OFF.

*Checking that the presccored scales are the same as the syntax scored scales (r = 1.000).
*Looks good as of June 2 2019.
CORRELATIONS
  /VARIABLES=SC13 TIPI_Extrav SC14 TIPI_Agree SC15 TIPI_Consc SC16 TIPI_Neuro SC17 
    TIPI_EmotStab SC18 TIPI_Openn  
  /PRINT=TWOTAIL NOSIG
  /MISSING=PAIRWISE.




********************************************************************.
**************************  ECR   *********************************.
********************************************************************.
*ECR.
*_____.

*From article (Wei et al):
﻿*33R. It helps to turn to my romantic partner in times of need. -->1r Avo
*18. I need a lot of reassurance that I am loved by my partner.  --> 2 Anx
*11. I want to get close to my partner, but I keep pulling back. --> 3 Avo
*26. I find that my partner(s) don’t want to get as close as I would like. --> 4Anx
*35R. I turn to my partner for many things, including comfort and reassurance.  -->5r Avo
*16. My desire to be very close sometimes scares people away.  --> 6 Anx
*17. I try to avoid getting too close to my partner. --> 7 Avo
*22R. I do not often worry about being abandoned. --> 8r Anx
*27R. I usually discuss my problems and concerns with my partner. --> 9r Avo
*32. I get frustrated if romantic partners are not available when I need them.  --> 10 Anx
*13. I am nervous when partners get too close to me. --> 11Avo
*6. I worry that romantic partners won’t care about me as much as I care about them.* --> 12 Anx
﻿*The order of the final 12-item short version is 33R, 18, 11, 26, 35R, 16, 17, 22R, 27R, 32, 13, and 6.

*AVOID: 1R, 3, 5R, 7, 9, 11.
*ANX: 2, 4, 6, 8R, 10, 12.
.

*Check the reverse was not done previously:.
DESCRIPTIVES VARIABLES=ECR_1 ECR_1R ECR_2 ECR_3 ECR_4 ECR_5 ECR_5R ECR_6 ECR_7 ECR_8 ECR_8R ECR_9 
    ECR_9R ECR_10 ECR_11 ECR_12
  /STATISTICS=MEAN STDDEV MIN MAX.

*REVERSE-CODING.
RECODE ECR_1 ECR_5 ECR_8 ECR_9 (1=7) (2=6) (3=5) (4=4) (5=3) (6=2) (7=1) (SYSMIS=SYSMIS) 
    (MISSING=SYSMIS) INTO ECR_1R ECR_5R ECR_8R ECR_9R.
VARIABLE LABELS  ECR_1R 'ECR_1R Avo' /ECR_5R 'ECR_5R' /ECR_8R 'ECR_8R' /ECR_9R 'ECR_9R'.
EXECUTE.

*Check the reverse was done correctly:.
DESCRIPTIVES VARIABLES=ECR_1 ECR_1R ECR_2 ECR_3 ECR_4 ECR_5 ECR_5R ECR_6 ECR_7 ECR_8 ECR_8R ECR_9 
    ECR_9R ECR_10 ECR_11 ECR_12
  /STATISTICS=MEAN STDDEV MIN MAX.

COMPUTE ECR_Avoid=sum.6(ECR_1R, ECR_3, ECR_5R, ECR_7, ECR_9R, ECR_11).
COMPUTE ECR_Anx=sum.6(ECR_2, ECR_4, ECR_6, ECR_8R, ECR_10, ECR_12).
EXECUTE.


FREQUENCIES VARIABLES=ECR_Avoid ECR_Anx
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN
  /HISTOGRAM
  /ORDER=ANALYSIS.


SORT CASES  BY GenderMWN.
SPLIT FILE LAYERED BY GenderMWN.

SORT CASES  BY Sample.
SPLIT FILE LAYERED BY Sample.

RELIABILITY
  /VARIABLES=ECR_1R ECR_3 ECR_5R ECR_7 ECR_9R ECR_11
  /SCALE('ECR_Avoid') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=ECR_2 ECR_4 ECR_6 ECR_8R ECR_10 ECR_12
  /SCALE('ECR_Anxious') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.


SORT CASES  BY Sample GenderMWN.
SPLIT FILE LAYERED BY Sample GenderMWN.

FREQUENCIES VARIABLES=ECR_Avoid ECR_Anx
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN
  /HISTOGRAM
  /ORDER=ANALYSIS.

RELIABILITY
  /VARIABLES=ECR_1R ECR_3 ECR_5R ECR_7 ECR_9R ECR_11
  /SCALE('ECR_Avoid') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=ECR_2 ECR_4 ECR_6 ECR_8R ECR_10 ECR_12
  /SCALE('ECR_Anxious') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

SPLIT FILE OFF.

*Checking that the presccored scales are the same as the syntax scored scales.
*Looks good as of June 2 2019.
CORRELATIONS
  /VARIABLES=SC19 ECR_Avoid SC20 ECR_Anx
  /PRINT=TWOTAIL NOSIG
  /MISSING=PAIRWISE.


********************************************************************.
*****************  SEX FUNCT  & HIST *************************.
********************************************************************.
*SEXUAL FUNCTIONING.
*& REL HIST.
*_____.

RECODE OrgEver (1=1) (2=0) (3=0) (4=SYSMIS) INTO OrgEverYN.
VARIABLE LABELS  OrgEverYN 'Orgasm Ever YN'.
EXECUTE.
VALUE LABELS OrgEverYN 1 'Yes' 0 'No'.

MISSING VALUES OrgEver (4).

FREQUENCIES VARIABLES=OrgEver OrgEverYN
  /ORDER=ANALYSIS.



RECODE NumRomRel NumSexRel (0=0) (SYSMIS=SYSMIS) (MISSING=SYSMIS) (999=SYSMIS) (1 thru Highest=1) 
    INTO RomRelYN SexRelYN.
VARIABLE LABELS  RomRelYN 'Romantic Rel Ever YN' /SexRelYN 'Sexul Rel Ever YN'.
EXECUTE.
VALUE LABELS RomRelYN 1 '1+ previous romantic rel' 0 'No previous romantic rel'.
VALUE LABELS SexRelYN 1 '1+ previous sexual rel' 0 'No previous sexual rel'.

FREQUENCIES VARIABLES=NumRomRel RomRelYN NumSexRel SexRelYN
  /ORDER=ANALYSIS.

DESCRIPTIVES VARIABLES=NumRomRel NumSexRel
  /STATISTICS=MEAN STDDEV MIN MAX.


*Making a new variable without value labels so R will read it as a numeric variable hopefully.
RECODE NumRomRel NumSexRel (0=0) (1=1) (2=2) (3=3) (4=4) (5=5) (6=6) (7=7)
    (8=8) (9=9) (10=10) (11=11) (12=12) (13=13) (14=14) (15=15) (ELSE=SYSMIS)
    INTO NRomRel NSexRel.
VARIABLE LABELS NRomRel 'Num Rom Rel' NSexRel 'Num Sex Rel'.
EXECUTE.




********************************************************************.
**************************  SDI   *********************************.
********************************************************************.
*SDI.
*_____.


SPLIT FILE OFF.
DESCRIPTIVES VARIABLES=SDI1 SDI2 SDI3 SDI4 SDI5 SDI6 SDI7 SDI8 SDI9 SDI10 SDI11 
    SDI12 SDI13 SDI14
  /STATISTICS=MEAN STDDEV MIN MAX.



*FOR DATASETS DOWNLOADED PRIOR TO RECODING.
    *RECODE SDI5_1 (1=0) (4=1) (5=2) (6=3) (7=4) (8=5) (9=6) (10=7) (11=8) INTO SDI5.
    *EXECUTE.
    *VARIABLE LABELS SDI5 'SDI5'.
    *VALUE LABELS SDI5 0 '0' 1 '1' 2 '2' 3 '3' 4 '4' 5 '5' 6 '6' 7 '7' 8 '8'.
    
    
    *Fixing SDI 5 when changed prematurely; likely best to ignore completely.
    *RECODE SDI5 (1=0) (4=1) (5=2) (6=3) (7=4) (8=5) (9=6) (10=7) (11=8).
    *EXECUTE.
    *VARIABLE LABELS SDI5 'SDI5fix'.
    
    *DESCRIPTIVES VARIABLES=SDI5
      /STATISTICS=MEAN STDDEV MIN MAX.




*ONLY COMPUTING SDI FOR THOSE WHO HAVE COMPLETE SDI DATA.
COMPUTE SDI_MissingCheck=sum.14(SDI1 TO SDI14).
EXECUTE.

FREQUENCIES SDI_MissingCheck.
NUMERIC SDI_Use (F1).

IF SDI_MissingCheck > 0 SDI_Use=1.
EXECUTE.

FREQUENCIES SDI_Use.

DO IF SDI_Use=1.
   COMPUTE SDI2_Dyadic=sum.8(SDI1 TO SDI8).
   COMPUTE SDI2_Sol=sum.3(SDI10 TO SDI12).
   COMPUTE SDI3_DPartner=sum.7(SDI1 TO SDI3, SDI6 TO SDI9).
   COMPUTE SDI3_DOther=sum.2(SDI4, SDI5).
   COMPUTE SDI3_Sol=sum.4(SDI10 TO SDi13).
   COMPUTE SDI2Total=sum.1(SDI1 TO SDI8, SDI10 TO SDI12).
   COMPUTE SDI3Total=sum.1(SDI1 TO SDI13).
END IF.


*DELETE VARIABLES SDI2_Dyadic TO SDI3_Sol.

FREQUENCIES VARIABLES= SDI2_Dyadic SDI2_Sol SDI3_DPartner SDI3_DOther SDI3_Sol SDI2Total SDI3Total
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN
  /HISTOGRAM
  /ORDER=ANALYSIS.


SORT CASES  BY GenderMWN.
SPLIT FILE LAYERED BY GenderMWN.

SORT CASES  BY Sample GenderMWN.
SPLIT FILE LAYERED BY Sample GenderMWN.

FILTER BY SDI_Use.
  RELIABILITY
  /VARIABLES=SDI1 TO SDI8
  /SCALE('SDI2_Dyadic') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.
FILTER OFF.

FILTER BY SDI_Use.
  RELIABILITY
  /VARIABLES=SDI10 TO SDI12
  /SCALE('SDI2_Sol') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.
FILTER OFF.

FILTER BY SDI_Use.
  RELIABILITY
  /VARIABLES=SDI1 TO SDI3, SDI6 TO SDI9
  /SCALE('SDI3_DPartner') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.
FILTER OFF.

FILTER BY SDI_Use.
  RELIABILITY
  /VARIABLES=SDI4 SDI5
  /SCALE('SDI3_DOther') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.
FILTER OFF.

FILTER BY SDI_Use.
  RELIABILITY
  /VARIABLES=SDI10 TO SDI13
  /SCALE('SDI3_Sol') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.
FILTER OFF.

FILTER BY SDI_Use.
  RELIABILITY
  /VARIABLES=SDI1 TO SDI8, SDI10 TO SDI12
  /SCALE('SDI2Total') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.
FILTER OFF.


FILTER BY SDI_Use.
  RELIABILITY
  /VARIABLES=SDI1 TO SDI13
  /SCALE('SDI3Total') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.
FILTER OFF.




*Checking that the presccored scales are the same as the syntax scored scales.
*Looks good as of June 2 2019.
CORRELATIONS
  /VARIABLES=SC21 SDI2_Dyadic SC22 SDI2_Sol SC23 
    SDI3_DPartner SC24 SDI3_DOther SC25 SDI3_Sol
  /PRINT=TWOTAIL NOSIG
  /MISSING=PAIRWISE.



  
********************************************************************.
**************************  FSFI   *********************************.
********************************************************************.
*FSFI.
*_____.


DESCRIPTIVES FSFI1 FSFI2
  /STATISTICS=MEAN STDDEV MIN MAX.

*ONE PARTICIPANT DID NOT ANSWER THE FSFI1.

RECODE FSFI1 FSFI2 (1=5) (2=4) (3=3) (4=2) (5=1) (SYSMIS=SYSMIS) INTO FSFI1R FSFI2R.
VARIABLE LABELS FSFI1R 'FSFI1R' / FSFI2R 'FSFI2R'.
EXECUTE.

*DELETE VARIABLES FSFI1R FSFI2R.

FREQUENCIES FSFI1 FSFI1R FSFI2 FSFI2R.

COMPUTE FSFI=sum.2(FSFI1R, FSFI2R).
VARIABLE LABELS FSFI 'FSFI'.
EXECUTE.

FREQUENCIES FSFI
/HISTOGRAM.

DESCRIPTIVES FSFI.

CORRELATIONS FSFI1R FSFI2R.

  RELIABILITY
  /VARIABLES=FSFI1R FSFI2R
  /SCALE('FSFI') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.


DELETE VARIABLES FSFI1 FSFI2.




********************************************************************.
**************************  ASEX   *********************************.
********************************************************************.
*ASEX.
*_____.

VARIABLE LABELS
ASEX1 'ASEX1Des'
ASEX2 'ASEX2Arous'
ASEX3F 'ASEX3FLub'
ASEX3M 'ASEX3MErect'
ASEX4 'ASEX4EaseOrg'
ASEX5 'ASEX5SatOrg'
.

SPLIT FILE OFF.

SORT CASES  BY Sample.
SPLIT FILE LAYERED BY Sample.
FREQUENCIES VARIABLES=ASEX1 ASEX2 ASEX3F ASEX3M ASEX4 ASEX5
  /STATISTICS=STDDEV MINIMUM MAXIMUM SEMEAN MEAN MEDIAN
  /ORDER=ANALYSIS.
*Several missing; ASEX4 numbers look weird; looked into it: coincidentally, the same number that 
are missing for ASEX3M College is the same that is valid for Mturk.


*With histograms.
FREQUENCIES VARIABLES=ASEX1 ASEX2 ASEX3F ASEX3M ASEX4 ASEX5
  /STATISTICS=STDDEV MINIMUM MAXIMUM SEMEAN MEAN MEDIAN
  /HISTOGRAM
  /ORDER=ANALYSIS.


*Combining the male/female sexual functioning items into one.
COMPUTE ASEX3 = sum.1(ASEX3F, ASEX3M).
VARIABLE LABELS ASEX3 'ASEX3LubErect'.
EXECUTE.

*Check for correctness.
FREQUENCIES VARIABLES=ASEX3F ASEX3M ASEX3
  /STATISTICS=STDDEV MINIMUM MAXIMUM SEMEAN MEAN MEDIAN
  /HISTOGRAM
  /ORDER=ANALYSIS.



COMPUTE ASEXTotal=sum.5(ASEX1, ASEX2, ASEX3, ASEX4, ASEX5).
VARIABLE LABELS ASEXTotal 'ASEXTotal'.
EXECUTE.

FREQUENCIES VARIABLES=ASEXTotal
  /STATISTICS=STDDEV MINIMUM MAXIMUM SEMEAN MEAN MEDIAN
  /HISTOGRAM
  /ORDER=ANALYSIS.


  RELIABILITY
  /VARIABLES=ASEX1 ASEX2 ASEX3 ASEX4 ASEX5
  /SCALE('ASEXTotalI') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.




*********.
*SEXUAL DYSFUNCTION.
*********.


RECODE ASEX1 ASEX2 ASEX3F ASEX3M ASEX4 ASEX5 (1=6) (2=5) (3=4) (4=3) (5=2) (6=1)
      INTO ASEX1R ASEX2R ASEX3FR ASEX3MR ASEX4R ASEX5R.
VALUE LABELS ASEX1R ASEX2R ASEX3FR ASEX3MR ASEX4R ASEX5R 
                           1 'high function, low dysfunction' 6 'low function, high dysfunction'.
EXECUTE.

COMPUTE ASEX3R = sum.1(ASEX3FR, ASEX3MR).
VARIABLE LABELS ASEX3R 'ASEX3RLubErect'.
EXECUTE.



COMPUTE ASEXRTotal=sum.5(ASEX1R, ASEX2R, ASEX3R, ASEX4R, ASEX5R).
VARIABLE LABELS ASEXRTotal 'ASEXRTotal'.
EXECUTE.

FREQUENCIES VARIABLES ASEX1 ASEX1R.
FREQUENCIES VARIABLES ASEX2 ASEX2R.
FREQUENCIES VARIABLES ASEX3 ASEX3R.
FREQUENCIES VARIABLES ASEX4 ASEX4R.
FREQUENCIES VARIABLES ASEX5 ASEX5R.
FREQUENCIES VARIABLES ASEXTotal ASEXRTotal
  /STATISTICS=MEAN STDDEV MIN MAX.


SORT CASES  BY Sample GenderMW.
SPLIT FILE LAYERED BY Sample GenderMW.
  RELIABILITY
  /VARIABLES=ASEX1R ASEX2R ASEX3R ASEX4R ASEX5R
  /SCALE('ASEXRTotalI') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.









********************************************************************.
************************  DESIRE   *******************************.
********************************************************************.
*DESIRE.
*_____.

*REVERSE CODING THE NEGATIVE ITEMS INTO NEW VARIABLES.
RECODE B_D2 B_D6 HYH_D2 HYH_D6 HYL_D2 HYL_D6 HNH_D2 HNH_D6 HNL_D2 HNL_D6 LYH_D2 LYH_D6 LYL_D2 
    LYL_D6 LNH_D2 LNH_D6 LNL_D2 LNL_D6 B_Resp2 HYH_Resp2 HYL_Resp2 HNH_Resp2 HNL_Resp2 LYH_Resp2 
    LYL_Resp2 LNH_Resp2 LNL_Resp2 (1=7) (2=6) (3=5) (4=4) (5=3) (6=2) (7=1) (SYSMIS=SYSMIS) 
    (MISSING=SYSMIS) INTO B_D2R B_D6R HYH_D2R HYH_D6R HYL_D2R HYL_D6R HNH_D2R HNH_D6R HNL_D2R HNL_D6R 
    LYH_D2R LYH_D6R LYL_D2R LYL_D6R LNH_D2R LNH_D6R LNL_D2R LNL_D6R B_Resp2R HYH_Resp2R HYL_Resp2R 
    HNH_Resp2R HNL_Resp2R LYH_Resp2R LYL_Resp2R LNH_Resp2R LNL_Resp2R.
VARIABLE LABELS  B_D2R 'B_D2R' /B_D6R 'B_D6R' /HYH_D2R 'HYH_D2R' /HYH_D6R 'HYH_D6R' /HYL_D2R 
    'HYL_D2R' /HYL_D6R 'HYL_D6R' /HNH_D2R 'HNH_D2R' /HNH_D6R 'HNH_D6R' /HNL_D2R 'HNL_D2R' /HNL_D6R 
    'HNL_D6R' /LYH_D2R 'LYH_D2R' /LYH_D6R 'LYH_D6R' /LYL_D2R 'LYL_D2R' /LYL_D6R 'LYL_D6R' /LNH_D2R 
    'LNH_D2R' /LNH_D6R 'LNH_D6R' /LNL_D2R 'LNL_D2R' /LNL_D6R 'LNL_D6R' /B_Resp2R 'B_Resp2R' /HYH_Resp2R 
    'HYH_Resp2R' /HYL_Resp2R 'HYL_Resp2R' /HNH_Resp2R 'HNH_Resp2R' /HNL_Resp2R 'HNL_Resp2R' /LYH_Resp2R 
    'LYH_Resp2R' /LYL_Resp2R 'LYL_Resp2R' /LNH_Resp2R 'LNH_Resp2R' /LNL_Resp2R 'LNL_Resp2R'.
EXECUTE.


*DESIRE6.
COMPUTE BDesire6=sum.6(B_D1, B_D2R, B_D3, B_D4, B_D5, B_D6R).
VARIABLE LABELS  BDesire6 'BDesire6'.
COMPUTE HYHDesire6=sum.6(HYH_D1, HYH_D2R, HYH_D3, HYH_D4, HYH_D5, HYH_D6R).
VARIABLE LABELS  HYHDesire6 'HYHDesire6'.
COMPUTE HYLDesire6=sum.6(HYL_D1, HYL_D2R, HYL_D3, HYL_D4, HYL_D5, HYL_D6R).
VARIABLE LABELS  HYLDesire6 'HYLDesire6'.
COMPUTE HNHDesire6=sum.6(HNH_D1, HNH_D2R, HNH_D3, HNH_D4, HNH_D5, HNH_D6R).
VARIABLE LABELS  HNHDesire6 'HNHDesire6'.
COMPUTE HNLDesire6=sum.6(HNL_D1, HNL_D2R, HNL_D3, HNL_D4, HNL_D5, HNL_D6R).
VARIABLE LABELS  HNLDesire6 'HNLDesire6'.
COMPUTE LYHDesire6=sum.6(LYH_D1, LYH_D2R, LYH_D3, LYH_D4, LYH_D5, LYH_D6R).
VARIABLE LABELS  LYHDesire6 'LYHDesire6'.
COMPUTE LYLDesire6=sum.6(LYL_D1, LYL_D2R, LYL_D3, LYL_D4, LYL_D5, LYL_D6R).
VARIABLE LABELS  LYLDesire6 'LYLDesire6'.
COMPUTE LNHDesire6=sum.6(LNH_D1, LNH_D2R, LNH_D3, LNH_D4, LNH_D5, LNH_D6R).
VARIABLE LABELS  LNHDesire6 'LNHDesire6'.
COMPUTE LNLDesire6=sum.6(LNL_D1, LNL_D2R, LNL_D3, LNL_D4, LNL_D5, LNL_D6R).
VARIABLE LABELS  LNLDesire6 'LNLDesire6'.
EXECUTE.

DESCRIPTIVES VARIABLES=BDesire6 HYHDesire6 HYLDesire6 HNHDesire6 HNLDesire6 LYHDesire6 LYLDesire6 
    LNHDesire6 LNLDesire6
  /STATISTICS=MEAN STDDEV MIN MAX KURTOSIS SKEWNESS.

FREQUENCIES VARIABLES=BDesire6 HYHDesire6 HYLDesire6 HNHDesire6 HNLDesire6 LYHDesire6 LYLDesire6 LNHDesire6 
    LNLDesire6
  /FORMAT=NOTABLE
  /STATISTICS=STDDEV MINIMUM MAXIMUM SEMEAN MEAN MEDIAN
  /HISTOGRAM
  /ORDER=ANALYSIS.

SORT CASES  BY Female.
SPLIT FILE LAYERED BY Female.

SPLIT FILE OFF.


RELIABILITY
  /VARIABLES=B_D1 B_D2R B_D3 B_D4 B_D5 B_D6R
  /SCALE('BDesire6') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=HYH_D1 HYH_D2R HYH_D3 HYH_D4 HYH_D5 HYH_D6R
  /SCALE('HYHDesire6') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=HYL_D1 HYL_D2R HYL_D3 HYL_D4 HYL_D5 HYL_D6R
  /SCALE('HYLDesire6') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=HNH_D1 HNH_D2R HNH_D3 HNH_D4 HNH_D5 HNH_D6R
  /SCALE('HNHDesire6') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=HNL_D1 HNL_D2R HNL_D3 HNL_D4 HNL_D5 HNL_D6R
  /SCALE('HNLDesire6') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=LYH_D1 LYH_D2R LYH_D3 LYH_D4 LYH_D5 LYH_D6R
  /SCALE('LYHDesire6') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=LYL_D1 LYL_D2R LYL_D3 LYL_D4 LYL_D5 LYL_D6R
  /SCALE('LYLDesire6') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=LNH_D1 LNH_D2R LNH_D3 LNH_D4 LNH_D5 LNH_D6R
  /SCALE('LNHDesire6') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=LNL_D1 LNL_D2R LNL_D3 LNL_D4 LNL_D5 LNL_D6R
  /SCALE('LNLDesire6') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.


*RESPONSIVE DESIRE.
COMPUTE BRespD=sum.3(B_Resp1, B_Resp2R, B_Resp3).
VARIABLE LABELS  BRespD 'BRespD'.
COMPUTE HYHRespD=sum.3(HYH_Resp1, HYH_Resp2R, HYH_Resp3).
VARIABLE LABELS  HYHRespD 'HYHRespD'.
COMPUTE HYLRespD=sum.3(HYL_Resp1, HYL_Resp2R, HYL_Resp3).
VARIABLE LABELS  HYLRespD 'HYLRespD'.
COMPUTE HNHRespD=sum.3(HNH_Resp1, HNH_Resp2R, HNH_Resp3).
VARIABLE LABELS  HNHRespD 'HNHRespD'.
COMPUTE HNLRespD=sum.3(HNL_Resp1, HNL_Resp2R, HNL_Resp3).
VARIABLE LABELS  HNLRespD 'HNLRespD'.
COMPUTE LYHRespD=sum.3(LYH_Resp1, LYH_Resp2R, LYH_Resp3).
VARIABLE LABELS  LYHRespD 'LYHRespD'.
COMPUTE LYLRespD=sum.3(LYL_Resp1, LYL_Resp2R, LYL_Resp3).
VARIABLE LABELS  LYLRespD 'LYLRespD'.
COMPUTE LNHRespD=sum.3(LNH_Resp1, LNH_Resp2R, LNH_Resp3).
VARIABLE LABELS  LNHRespD 'LNHRespD'.
COMPUTE LNLRespD=sum.3(LNL_Resp1, LNL_Resp2R, LNL_Resp3).
VARIABLE LABELS  LNLRespD 'LNLRespD'.
EXECUTE.

DESCRIPTIVES VARIABLES=BRespD HYHRespD HYLRespD HNHRespD HNLRespD LYHRespD LYLRespD LNHRespD 
    LNLRespD
  /STATISTICS=MEAN STDDEV MIN MAX KURTOSIS SKEWNESS.

FREQUENCIES VARIABLES=BRespD HYHRespD HYLRespD HNHRespD HNLRespD LYHRespD LYLRespD LNHRespD LNLRespD    
  /FORMAT=NOTABLE
  /STATISTICS=STDDEV MINIMUM MAXIMUM SEMEAN MEAN MEDIAN
  /HISTOGRAM
  /ORDER=ANALYSIS.




*DESIRE9.
COMPUTE BDesire9=sum.9(B_D1, B_D2R, B_D3, B_D4, B_D5, B_D6R,B_Resp1, B_Resp2R, B_Resp3).
VARIABLE LABELS  BDesire9 'BDesire9'.
COMPUTE HYHDesire9=sum.9(HYH_D1, HYH_D2R, HYH_D3, HYH_D4, HYH_D5, HYH_D6R, HYH_Resp1, HYH_Resp2R, HYH_Resp3).
VARIABLE LABELS  HYHDesire9 'HYHDesire9'.
COMPUTE HYLDesire9=sum.9(HYL_D1, HYL_D2R, HYL_D3, HYL_D4, HYL_D5, HYL_D6R, HYL_Resp1, HYL_Resp2R, HYL_Resp3).
VARIABLE LABELS  HYLDesire9 'HYLDesire9'.
COMPUTE HNHDesire9=sum.9(HNH_D1, HNH_D2R, HNH_D3, HNH_D4, HNH_D5, HNH_D6R, HNH_Resp1, HNH_Resp2R, HNH_Resp3).
VARIABLE LABELS  HNHDesire9 'HNHDesire9'.
COMPUTE HNLDesire9=sum.9(HNL_D1, HNL_D2R, HNL_D3, HNL_D4, HNL_D5, HNL_D6R, HNL_Resp1, HNL_Resp2R, HNL_Resp3).
VARIABLE LABELS  HNLDesire9 'HNLDesire9'.
COMPUTE LYHDesire9=sum.9(LYH_D1, LYH_D2R, LYH_D3, LYH_D4, LYH_D5, LYH_D6R, LYH_Resp1, LYH_Resp2R, LYH_Resp3).
VARIABLE LABELS  LYHDesire9 'LYHDesire9'.
COMPUTE LYLDesire9=sum.9(LYL_D1, LYL_D2R, LYL_D3, LYL_D4, LYL_D5, LYL_D6R, LYL_Resp1, LYL_Resp2R, LYL_Resp3).
VARIABLE LABELS  LYLDesire9 'LYLDesire9'.
COMPUTE LNHDesire9=sum.9(LNH_D1, LNH_D2R, LNH_D3, LNH_D4, LNH_D5, LNH_D6R, LNH_Resp1, LNH_Resp2R, LNH_Resp3).
VARIABLE LABELS  LNHDesire9 'LNHDesire9'.
COMPUTE LNLDesire9=sum.9(LNL_D1, LNL_D2R, LNL_D3, LNL_D4, LNL_D5, LNL_D6R, LNL_Resp1, LNL_Resp2R, LNL_Resp3).
VARIABLE LABELS  LNLDesire9 'LNLDesire9'.
EXECUTE.

DESCRIPTIVES VARIABLES=BDesire9 HYHDesire9 HYLDesire9 HNHDesire9 HNLDesire9 LYHDesire9 LYLDesire9 
    LNHDesire9 LNLDesire9
  /STATISTICS=MEAN STDDEV MIN MAX KURTOSIS SKEWNESS.
    
FREQUENCIES VARIABLES=BDesire9 HYHDesire9 HYLDesire9 HNHDesire9 HNLDesire9 LYHDesire9 LYLDesire9 
    LNHDesire9 LNLDesire9
  /FORMAT=NOTABLE
  /STATISTICS=STDDEV MINIMUM MAXIMUM SEMEAN MEAN MEDIAN
  /HISTOGRAM
  /ORDER=ANALYSIS.

RELIABILITY
  /VARIABLES=B_D1 B_D2R B_D3 B_D4 B_D5 B_D6R B_Resp1 B_Resp2R B_Resp3
  /SCALE('BDesire9') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=HYH_D1 HYH_D2R HYH_D3 HYH_D4 HYH_D5 HYH_D6R HYH_Resp1 HYH_Resp2R HYH_Resp3
  /SCALE('HYHDesire9') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=HYL_D1 HYL_D2R HYL_D3 HYL_D4 HYL_D5 HYL_D6R HYL_Resp1 HYL_Resp2R HYL_Resp3
  /SCALE('HYLDesire9') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=HNH_D1 HNH_D2R HNH_D3 HNH_D4 HNH_D5 HNH_D6R HNH_Resp1 HNH_Resp2R HNH_Resp3
  /SCALE('HNHDesire9') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=HNL_D1 HNL_D2R HNL_D3 HNL_D4 HNL_D5 HNL_D6R HNL_Resp1 HNL_Resp2R HNL_Resp3
  /SCALE('HNLDesire9') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=LYH_D1 LYH_D2R LYH_D3 LYH_D4 LYH_D5 LYH_D6R LYH_Resp1 LYH_Resp2R LYH_Resp3
  /SCALE('LYHDesire9') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=LYL_D1 LYL_D2R LYL_D3 LYL_D4 LYL_D5 LYL_D6R LYL_Resp1 LYL_Resp2R LYL_Resp3
  /SCALE('LYLDesire9') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=LNH_D1 LNH_D2R LNH_D3 LNH_D4 LNH_D5 LNH_D6R LNH_Resp1 LNH_Resp2R LNH_Resp3
  /SCALE('LNHDesire9') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=LNL_D1 LNL_D2R LNL_D3 LNL_D4 LNL_D5 LNL_D6R LNL_Resp1 LNL_Resp2R LNL_Resp3
  /SCALE('LNLDesire9') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.



RECODE GenderMW (1=-1) (2=1) INTO GenderCC.
VALUE LABELS GenderCC -1 'Men' 1 'Women'.
EXECUTE.
VARIABLE LABELS GenderCC 'Gender contrast (-1m, 1w)'.


RECODE Sample (1=-1) (2=1) INTO SampleCC.
VALUE LABELS SampleCC -1 'College' 1 'Mturk'.
EXECUTE.
VARIABLE LABELS SampleCC 'Sample contrast (-1col, 1com)'.

RECODE D2 D6 Resp2 (1=7) (2=6) (3=5) (4=4) (5=3) (6=2) (7=1) (SYSMIS=SYSMIS) 
    (MISSING=SYSMIS) INTO D2R D6R Resp2R.
EXECUTE.
VARIABLE LABELS D2R 'D2R' D6R 'D6R' Resp2R 'Resp2R'.

COMPUTE Desire7=sum.2(Desire6, Resp2R).
EXECUTE.
VARIABLE LABELS Desire7 'Desire7'.

FREQUENCIES VARIABLES= GenderMW GenderCC Sample SampleCC Desire7.
  /ORDER=ANALYSIS.



*DESIRE8.
*PP datset (9 rows for each participant, one for each vignette).
COMPUTE Desire8=sum.8(DLk, D1, D2R, D3, D6R, ODes, Resp1,  Resp2R).
EXECUTE.

FREQUENCIES VARIABLES=Desire8
  /STATISTICS=STDDEV MINIMUM MAXIMUM MEAN SKEWNESS SESKEW KURTOSIS SEKURT
  /ORDER=ANALYSIS.

IF  (Sample = 1) Des8Col=Desire8.
IF  (Sample = 2) Des8Mtk=Desire8.
EXECUTE.

VARIABLE LABELS Des8Col 'Des8Col' Des8Mtk 'Des8Mtk'.


*Indiv dataset (one row for each participant that includes desire items for all vigenettes).
COMPUTE BDesire8=sum.8(B_Lk, B_D1, B_D2R, B_D3, B_D6R, B_ODes, B_Resp1, B_Resp2R).
VARIABLE LABELS  BDesire8 'BDesire8'.
EXECUTE.

COMPUTE HYHDesire8=sum.8(HYH_Lk, HYH_D1, HYH_D2R, HYH_D3, HYH_D6R, HYH_ODes, HYH_Resp1, HYH_Resp2R).
VARIABLE LABELS  HYHDesire8 'HYHDesire8'.
EXECUTE.

COMPUTE HYLDesire8=sum.8(HYL_Lk, HYL_D1, HYL_D2R, HYL_D3, HYL_D6R, HYL_ODes, HYL_Resp1, HYL_Resp2R).
VARIABLE LABELS  HYLDesire8 'HYLDesire8'.
EXECUTE.

COMPUTE HNHDesire8=sum.8(HNH_Lk, HNH_D1, HNH_D2R, HNH_D3, HNH_D6R, HNH_ODes, HNH_Resp1, HNH_Resp2R).
VARIABLE LABELS  HNHDesire8 'HNHDesire8'.
EXECUTE.

COMPUTE HNLDesire8=sum.8(HNL_Lk, HNL_D1, HNL_D2R, HNL_D3, HNL_D6R, HNL_ODes, HNL_Resp1, HNL_Resp2R).
VARIABLE LABELS  HNLDesire8 'HNLDesire8'.
EXECUTE.

COMPUTE LYHDesire8=sum.8(LYH_Lk, LYH_D1, LYH_D2R, LYH_D3, LYH_D6R, LYH_ODes, LYH_Resp1, LYH_Resp2R).
VARIABLE LABELS  LYHDesire8 'LYHDesire8'.
EXECUTE.

COMPUTE LYLDesire8=sum.8(LYL_Lk, LYL_D1, LYL_D2R, LYL_D3, LYL_D6R, LYL_ODes, LYL_Resp1, LYL_Resp2R).
VARIABLE LABELS  LYLDesire8 'LYLDesire8'.
EXECUTE.

COMPUTE LNHDesire8=sum.8(LNH_Lk, LNH_D1, LNH_D2R, LNH_D3, LNH_D6R, LNH_ODes, LNH_Resp1, LNH_Resp2R).
VARIABLE LABELS  LNHDesire8 'LNHDesire8'.
EXECUTE.

COMPUTE LNLDesire8=sum.8(LNL_Lk, LNL_D1, LNL_D2R, LNL_D3, LNL_D6R, LNL_ODes, LNL_Resp1, LNL_Resp2R).
VARIABLE LABELS  LNLDesire8 'LNLDesire8'.
EXECUTE.




SORT CASES  BY GenderMW.
SPLIT FILE LAYERED BY GenderMW.

SORT CASES  BY Sample GenderMW.
SPLIT FILE LAYERED BY Sample GenderMW.

SPLIT FILE OFF.

SORT CASES  BY Sample.
SPLIT FILE LAYERED BY Sample.

SORT CASES  BY Sample.
SPLIT FILE SEPARATE BY Sample.


DESCRIPTIVES VARIABLES=BDesire8 HYHDesire8 HYLDesire8 HNHDesire8 HNLDesire8 LYHDesire8 LYLDesire8 
    LNHDesire8 LNLDesire8
  /STATISTICS=MEAN STDDEV MIN MAX KURTOSIS SKEWNESS.

FREQUENCIES VARIABLES=BDesire8 HYHDesire8 HYLDesire8 HNHDesire8 HNLDesire8 LYHDesire8 LYLDesire8 LNHDesire8 
    LNLDesire8
  /FORMAT=NOTABLE
  /STATISTICS=STDDEV MINIMUM MAXIMUM SEMEAN MEAN MEDIAN
  /HISTOGRAM
  /ORDER=ANALYSIS.

SORT CASES  BY GenderMW.
SPLIT FILE LAYERED BY GenderMW.

SORT CASES  BY Sample GenderMW.
SPLIT FILE LAYERED BY Sample GenderMW.

SPLIT FILE OFF.

*Reliability from each vignette.
RELIABILITY
  /VARIABLES=B_Lk B_D1 B_D2R B_D3 B_D6R B_ODes B_Resp1 B_Resp2R
  /SCALE('BDesire8') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=HYH_Lk HYH_D1 HYH_D2R HYH_D3 HYH_D6R HYH_ODes HYH_Resp1 HYH_Resp2R
  /SCALE('HYHDesire8') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=HYL_Lk HYL_D1 HYL_D2R HYL_D3 HYL_D6R HYL_ODes HYL_Resp1 HYL_Resp2R
  /SCALE('HYLDesire8') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=HNH_Lk HNH_D1 HNH_D2R HNH_D3 HNH_D6R HNH_ODes HNH_Resp1 HNH_Resp2R
  /SCALE('HNHDesire8') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=HNL_Lk HNL_D1 HNL_D2R HNL_D3 HNL_D6R HNL_ODes HNL_Resp1 HNL_Resp2R
  /SCALE('HNLDesire8') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=LYH_Lk LYH_D1 LYH_D2R LYH_D3 LYH_D6R LYH_ODes LYH_Resp1 LYH_Resp2R
  /SCALE('LYHDesire8') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=LYL_Lk LYL_D1 LYL_D2R LYL_D3 LYL_D6R LYL_ODes LYL_Resp1 LYL_Resp2R
  /SCALE('LYLDesire8') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=LNH_Lk LNH_D1 LNH_D2R LNH_D3 LNH_D6R LNH_ODes LNH_Resp1 LNH_Resp2R
  /SCALE('LNHDesire8') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.

RELIABILITY
  /VARIABLES=LNL_Lk LNL_D1 LNL_D2R LNL_D3 LNL_D6R LNL_ODes LNL_Resp1 LNL_Resp2R
  /SCALE('LNLDesire8') ALL
  /MODEL=ALPHA
  /STATISTICS=DESCRIPTIVE SCALE CORR COV
  /SUMMARY=TOTAL MEANS VARIANCE COV CORR.


DATASET ACTIVATE DataSet1.
SORT CASES  BY GenderMW.
SPLIT FILE SEPARATE BY GenderMW.


