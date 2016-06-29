
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IGFacebookPageAddress : NSObject <NSCopying> {

	NSString* _street;
	NSString* _postalCode;

}

@property (nonatomic,copy) NSString * street;                  //@synthesize street=_street - In the implementation block
@property (nonatomic,copy) NSString * postalCode;              //@synthesize postalCode=_postalCode - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)street;
-(void)setStreet:(NSString *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(NSString *)postalCode;
@end

