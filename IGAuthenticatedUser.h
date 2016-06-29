
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface IGAuthenticatedUser : NSObject <NSCoding> {

	char _isPrivate;
	NSString* _pk;
	NSString* _username;
	NSString* _profilePicURL;
	NSString* _fullName;

}

@property (copy) NSString * pk;                         //@synthesize pk=_pk - In the implementation block
@property (copy) NSString * username;                   //@synthesize username=_username - In the implementation block
@property (copy) NSString * profilePicURL;              //@synthesize profilePicURL=_profilePicURL - In the implementation block
@property (copy) NSString * fullName;                   //@synthesize fullName=_fullName - In the implementation block
@property (assign) char isPrivate;                      //@synthesize isPrivate=_isPrivate - In the implementation block
-(NSString *)pk;
-(void)setPk:(NSString *)arg1 ;
-(void)setProfilePicURL:(NSString *)arg1 ;
-(void)setIsPrivate:(char)arg1 ;
-(NSString *)profilePicURL;
-(id)toDict;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(char)isPrivate;
@end

