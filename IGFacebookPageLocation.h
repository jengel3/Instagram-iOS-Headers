
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface IGFacebookPageLocation : NSObject <NSCopying> {

	NSNumber* _latitude;
	NSNumber* _longitude;

}

@property (nonatomic,retain) NSNumber * latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,retain) NSNumber * longitude;              //@synthesize longitude=_longitude - In the implementation block
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
@end

