
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IGFacebookPagePhoneNumber : NSObject <NSCopying> {

	NSString* _countryCode;
	NSString* _nationalNumber;

}

@property (nonatomic,copy) NSString * countryCode;                 //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * nationalNumber;              //@synthesize nationalNumber=_nationalNumber - In the implementation block
-(void)setNationalNumber:(NSString *)arg1 ;
-(NSString *)nationalNumber;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)countryCode;
@end

