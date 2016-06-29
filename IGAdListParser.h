
#import <Instagram/IGGraphQLParsing.h>

@class NSDateFormatter, NSNumberFormatter, NSString;

@interface IGAdListParser : NSObject <IGGraphQLParsing> {

	NSDateFormatter* _dateFormatter;
	NSNumberFormatter* _numberFormatter;

}

@property (nonatomic,readonly) NSDateFormatter * dateFormatter;                  //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,readonly) NSNumberFormatter * numberFormatter;              //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)parseAds:(id)arg1 ofType:(unsigned)arg2 error:(id*)arg3 ;
-(id)adFromDictionary:(id)arg1 withType:(unsigned)arg2 error:(id*)arg3 ;
-(id)paymentInfoFromAdDictionary:(id)arg1 error:(id*)arg2 ;
-(id)paymentInfoFromCreditCardDictionary:(id)arg1 error:(id*)arg2 ;
-(id)paymentInfoFromPaypalDictionary:(id)arg1 error:(id*)arg2 ;
-(id)parseGraphQLResponseWithResult:(id)arg1 error:(id*)arg2 ;
-(NSNumberFormatter *)numberFormatter;
-(NSDateFormatter *)dateFormatter;
-(id)init;
@end

