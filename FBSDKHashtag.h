
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FBSDKHashtag : NSObject <FBSDKCopying, NSSecureCoding> {

	NSString* _stringRepresentation;

}

@property (nonatomic,copy) NSString * stringRepresentation;              //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hashtagWithString:(id)arg1 ;
+(char)supportsSecureCoding;
-(char)isEqualToHashtag:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(char)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStringRepresentation:(NSString *)arg1 ;
-(NSString *)stringRepresentation;
@end

