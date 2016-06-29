
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate;

@interface IGFacebookUserInfo : NSObject <NSCoding> {

	char _isEmployee;
	char _usesDefaultProfilePicture;
	NSString* _userID;
	NSString* _fullName;
	NSDate* _infoExpirationDate;

}

@property (nonatomic,readonly) NSString * userID;                           //@synthesize userID=_userID - In the implementation block
@property (nonatomic,readonly) NSString * fullName;                         //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,readonly) char isEmployee;                             //@synthesize isEmployee=_isEmployee - In the implementation block
@property (nonatomic,readonly) char usesDefaultProfilePicture;              //@synthesize usesDefaultProfilePicture=_usesDefaultProfilePicture - In the implementation block
@property (nonatomic,readonly) NSDate * infoExpirationDate;                 //@synthesize infoExpirationDate=_infoExpirationDate - In the implementation block
-(char)isEmployee;
-(NSDate *)infoExpirationDate;
-(char)usesDefaultProfilePicture;
-(id)initWithGraphUserDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)userID;
-(NSString *)fullName;
@end

