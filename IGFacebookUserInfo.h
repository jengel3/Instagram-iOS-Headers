
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary, NSString;

@interface IGFacebookUserInfo : NSObject <NSCoding> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) NSString * userID; 
@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) char isEmployee; 
@property (nonatomic,readonly) char usesDefaultProfilePicture; 
-(char)isEmployee;
-(id)initWithGraphUserDictionary:(id)arg1 ;
-(char)usesDefaultProfilePicture;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)userID;
-(NSString *)fullName;
@end

