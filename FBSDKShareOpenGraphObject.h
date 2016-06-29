
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKShareOpenGraphValueContainer.h>
#import <Instagram/FBSDKCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FBSDKShareOpenGraphObject : FBSDKShareOpenGraphValueContainer <FBSDKCopying, NSSecureCoding>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithProperties:(id)arg1 ;
-(char)isEqualToShareOpenGraphObject:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

