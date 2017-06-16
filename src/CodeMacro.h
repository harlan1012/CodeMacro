#pragma mark - CodeMacro

#pragma mark - DOC_TYPE_CODE
#define DOC_TYPE_CODE_POLICYAMENDMENT         @"P40001"
#define DOC_TYPE_CODE_INVESTMENTCHANGE        @"P40005"
#define DOC_TYPE_CODE_HEALTHSTATEMENT         @"P40010"
#define DOC_TYPE_CODE_POLICYFUNDWITHDRAWAL    @"P40015"
#define DOC_TYPE_CODE_POLICYFUNDMATURITY      @"P40016"
#define DOC_TYPE_CODE_POLICYFUNDDEPOSIT       @"P40017"
#define DOC_TYPE_CODE_POLICYFUNDSETTLEMENT    @"P40018"
#define DOC_TYPE_CODE_POLICYLOAN              @"P40020"
#define DOC_TYPE_CODE_SPECIALINSTRUCTION      @"P40025"
#define DOC_TYPE_CODE_NOTICEENROLLMENT        @"P40030"
#define DOC_TYPE_CODE_EXTENSIONOFGRACEPERIOD  @"P40035"
#define DOC_TYPE_CODE_CASHSURRENDER           @"P40040"
#define DOC_TYPE_CODE_DOCUMNETCOMPLETIONSLIP  @"P40045"
#define DOC_TYPE_CODE_CONSENTANDWAIVER        @"P40060"
#define DOC_TYPE_CODE_POLICYAMENDMENT_ACA     @"P40079"
#define DOC_TYPE_CODE_POLICYAMENDMENT_CTA     @"P40080"
#define DOC_TYPE_CODE_POLICYAMENDMENT_PUA     @"P40081" // for iServe
#define DOC_TYPE_CODE_POLICYAMENDMENT_ADA     @"P40082"

//ABOUT_POLICY
#define ABOUT_POLICY_PHONE_TYPE_CODE_RESIDENCE              @"2001"
#define ABOUT_POLICY_PHONE_TYPE_CODE_OFFICE                 @"2002"
#define ABOUT_POLICY_PHONE_TYPE_CODE_MOBILE                 @"2003"
#define ABOUT_POLICY_PHONE_TYPE_CODE_ABSTRACT               @"2004" // save with this type when the user hasnot select office or residence
//Policy Amendment
#define CHANGE_DETAIL_PHONE_TYPE_CODE_MOBILE                @"2206"
#define CHANGE_DETAIL_PHONE_TYPE_CODE_RESIDENCE             @"2101"
#define CHANGE_DETAIL_PHONE_TYPE_CODE_OFFICE                @"2102"
#define CHANGE_DETAIL_PHONE_TYPE_CODE_ABSTRACT              @"2103" // save with this type when the user hasnot select office or residence
#define CHANGE_DETAIL_PHONE_TYPE_CODE_FACSMILE              @"2207" //
#define CHANGE_DETAIL_PHONE_TYPE_CODE_POLICYLOAN            @"2208"
#define CHANGE_DETAIL_PHONE_TYPE_CODE_POLICYFUND            @"2209"
#define CHANGE_DETAIL_PHONE_TYPE_CODE_POLICYCASHSURRENDER   @"2210"
#define CHANGE_DETAIL_PHONE_TYPE_CODE_POLICYAMENDMENT       @"2211"
#define CHANGE_DETAIL_PHONE_TYPE_CODE_POLICYENROLLMENTS     @"2212" // for iServe

#define HEALTHT_RANSACTIONCODE_REINSTATEMENT                @"2301"
#define HEALTHT_RANSACTIONCODE_TOPUP                        @"2302"
#define HEALTHT_RANSACTIONCODE_REMOVE                       @"2303"
#define HEALTHT_RANSACTIONCODE_CHANGEPLAN                   @"2304"
#define HEALTHT_RANSACTIONCODE_INCREASE                     @"2305"
#define HEALTHT_RANSACTIONCODE_RIDER                        @"2306"
#define HEALTHT_RANSACTIONCODE_OTHER                        @"2307"

#pragma mark - INVESTMENT_ID
#define TYPE_ID_CHANGE_ALLCOTION_MODULE_ID    @"3001"
#define TYPE_ID_CHANGE_TOPUP_MODULE_ID        @"3002"
#define TYPE_ID_SWICH_FUND_MODULE_ID          @"3003"

//table code
#define SEGMENT_Y                             @"Y"
#define SEGMENT_N                             @"N"
#define TYPEOFACCOUNT_SAVINGS                 @"Savings"
#define TYPEOFACCOUNT_CHECKING                @"Checking"
#define ACCOUNTDENOMINATION_PESO              @"Peso"
#define ACCOUNTDENOMINATION_DOLLAR            @"Dollar"
#define RELATIONSHIP_FINACE                   @"Fiance"
#define RELATIONSHIP_FINACEE                  @"Fiancee"
#define BENEFICIARYTYPE_COMPANY               @"C"
#define BENEFICIARYTYPE_NORMAL                @"I"
#define HEALTHSTATEMENT_INSURED               @"insured"
#define HEALTHSTATEMENT_OWNER                 @"owner"
#define TRANSACTION_SURRENDERPOLICY           @"SP"
#define TRANSACTION_SURRENDERRIDER            @"SRWCV"
#define TRANSACTION_FULLREDEMPTION            @"FR"
#define TRANSACTION_CANCELLATION              @"CWCO"

//DicCode fund filed code
#define DICCODE_FUNDCODE_BPI_PHL_MCF          @"4015"
#define DICCODE_FUNDCODE_BPI_PHL_MGF          @"4016"
#define DICCODE_FUNDCODE_BPI_PHL_MGFTOW       @"4017"

#define DOC_TYPE_CODE_OWNERIMAGE              @"5021"
#define DOC_TYPE_CODE_BSEIMAGE                @"5022"
#define DOC_TYPE_CODE_IRREVOCABLEIMAGE        @"5023"
#define DOC_TYPE_CODE_ASSIGNIMAGE             @"5024"
#define DOC_TYPE_CODE_INSUREDIMAGE            @"5025"
#define DOC_TYPE_CODE_LEGALGUARDIANIMAGE      @"5026"
#define DOC_TYPE_CODE_CODEPOSITORIMAGE        @"5027"
#define DOC_TYPE_CODE_CARDHOLDERIMAGE         @"5028"

//SEGMENT
#define SEGMENT_YES                           @"Yes"
#define SEGMENT_NO                            @"No"
#define SEGMENT_NIL                           @""

#define SEGMENT_INSURED                       @"Insured"
#define SEGMENT_OWNER                         @"Owner"

#define SEGMENT_MALE                          @"Male"
#define SEGMENT_FEMALE                        @"Female"

#define SEGMENT_SKIP                          @"Skip"
#define SEGMENT_SIGN                          @"Sign"

//dropDown
#define DROPDOWN_PERCENTAGE @"Percentage"
#define DROPDOWN_AMOUNT @"Amount"
#define DROPDOWN_UNITS @"Number of Units"

#define ADA_PaymentMethod       @"Auto Debit Arrangement (ADA)"
#define ACA_PaymentMethod       @"Auto Credit Arrangement (ACA)"
#define EOL_PaymentMethod       @"BPI Express Online (EOL)"
#define CTA_SettlementOption    @"Credit to Account (CTA)"
#define CBB_SettlementOption    @"Claim at any BPI/BPI Family Bank Branch"
#define PUA_PickupAnywhere      @"Pick-up Anywhere (PUA)"   // for iServe

//basic tag
#define FUNDSWITCH_TAG_BASIC_VALUE 1920
