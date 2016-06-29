
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKShareOpenGraphValueContainer.h>
#import <Instagram/FBSDKCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FBSDKShareOpenGraphAction : FBSDKShareOpenGraphValueContainer <FBSDKCopying, NSSecureCoding> {

	NSString* _actionType;

}

@property (nonatomic,copy) NSString * actionType;                   //@synthesize actionType=_actionType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionWithType:(id)arg1 object:(id)arg2 key:(id)arg3 ;
+(id)actionWithType:(id)arg1 objectID:(id)arg2 key:(id)arg3 ;
+(id)actionWithType:(id)arg1 objectURL:(id)arg2 key:(id)arg3 ;
+(char)supportsSecureCoding;
-(char)isEqualToShareOpenGraphAction:(id)arg1 ;
-(char)requireKeyNamespace;
-(NSString *)actionType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActionType:(NSString *)arg1 ;
@end

