
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary;

@interface FBSDKLikeActionControllerCache : NSObject <NSSecureCoding> {

	NSString* _accessTokenString;
	NSMutableDictionary* _items;

}

@property (nonatomic,copy,readonly) NSString * accessTokenString;              //@synthesize accessTokenString=_accessTokenString - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithAccessTokenString:(id)arg1 ;
-(void)resetForAccessTokenString:(id)arg1 ;
-(NSString *)accessTokenString;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)_prune;
@end

