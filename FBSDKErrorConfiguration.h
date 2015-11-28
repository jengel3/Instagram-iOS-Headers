
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface FBSDKErrorConfiguration : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _configurationDictionary;

}
+(char)supportsSecureCoding;
-(void)parseArray:(id)arg1 ;
-(id)recoveryConfigurationForCode:(id)arg1 subcode:(id)arg2 request:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

