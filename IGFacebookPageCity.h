
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IGFacebookPageCity : NSObject <NSCopying> {

	NSString* _cityName;
	NSString* _cityID;

}

@property (nonatomic,copy) NSString * cityName;              //@synthesize cityName=_cityName - In the implementation block
@property (nonatomic,copy) NSString * cityID;                //@synthesize cityID=_cityID - In the implementation block
-(void)setCityID:(NSString *)arg1 ;
-(NSString *)cityID;
-(NSString *)cityName;
-(void)setCityName:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

