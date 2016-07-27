
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDate;

@interface FBSDKProfile : NSObject <NSCopying, NSSecureCoding> {

	NSString* _userID;
	NSString* _firstName;
	NSString* _middleName;
	NSString* _lastName;
	NSString* _name;
	NSURL* _linkURL;
	NSDate* _refreshDate;

}

@property (nonatomic,readonly) NSString * userID;                  //@synthesize userID=_userID - In the implementation block
@property (nonatomic,readonly) NSString * firstName;               //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * middleName;              //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSURL * linkURL;                    //@synthesize linkURL=_linkURL - In the implementation block
@property (nonatomic,readonly) NSDate * refreshDate;               //@synthesize refreshDate=_refreshDate - In the implementation block
+(void)setCurrentProfile:(id)arg1 ;
+(id)fetchCachedProfile;
+(void)cacheProfile:(id)arg1 ;
+(void)observeChangeAccessTokenChange:(id)arg1 ;
+(id)currentProfile;
+(void)enableUpdatesOnAccessTokenChange:(char)arg1 ;
+(char)supportsSecureCoding;
-(char)isEqualToProfile:(id)arg1 ;
-(id)imagePathForPictureMode:(unsigned)arg1 size:(CGSize)arg2 ;
-(NSDate *)refreshDate;
-(id)initWithUserID:(id)arg1 firstName:(id)arg2 middleName:(id)arg3 lastName:(id)arg4 name:(id)arg5 linkURL:(id)arg6 refreshDate:(id)arg7 ;
-(id)imageURLForPictureMode:(unsigned)arg1 size:(CGSize)arg2 ;
-(NSString *)middleName;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)userID;
-(NSURL *)linkURL;
@end

