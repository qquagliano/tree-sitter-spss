; R works fine detecting language from the SPSS syntax
(injection
  (language
    (r)  @injection.language
  )
  (injection_source) @injection.content
)

; Python needs to be specified as the language from 'PYTHON3' SPSS syntax
(injection
  (language
    (python)
    (#set! injection.language "python")
  )
  (injection_source) @injection.content
)
