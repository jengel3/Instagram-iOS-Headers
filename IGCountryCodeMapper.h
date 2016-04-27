

@interface IGCountryCodeMapper : NSObject
+(void)initializeCountryCodeToCountryNumberMap;
+(id)countryNameToCountryNumberMap;
+(void)initializeCountryNumberSet;
+(char)validCountryNumber:(id)arg1 ;
+(id)countryNumberForCountryCode:(id)arg1 ;
+(id)possibleCountryCodesForCountryNumber:(id)arg1 ;
+(int)countryNumberLengthForPhoneNumber:(id)arg1 ;
+(id)countryCodeForCountryName:(id)arg1 ;
+(void)clearData;
@end

