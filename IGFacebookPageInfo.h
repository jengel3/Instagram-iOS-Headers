
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, IGFacebookPagePhoneNumber, NSURL, IGFacebookPageAddress, IGFacebookPageCity, IGFacebookPageLocation, NSArray;

@interface IGFacebookPageInfo : NSObject <NSCopying> {

	NSString* _pageID;
	NSString* _pageName;
	NSString* _publicEmail;
	IGFacebookPagePhoneNumber* _phoneNumber;
	unsigned _contactPreference;
	NSString* _category;
	NSURL* _profilePictureURL;
	IGFacebookPageAddress* _address;
	IGFacebookPageCity* _city;
	IGFacebookPageLocation* _location;
	NSArray* _connectedInstagramAccountIDs;
	NSString* _accessToken;

}

@property (nonatomic,copy) NSString * pageID;                                     //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,copy) NSString * pageName;                                   //@synthesize pageName=_pageName - In the implementation block
@property (nonatomic,copy) NSString * publicEmail;                                //@synthesize publicEmail=_publicEmail - In the implementation block
@property (nonatomic,copy) IGFacebookPagePhoneNumber * phoneNumber;               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) unsigned contactPreference;                          //@synthesize contactPreference=_contactPreference - In the implementation block
@property (nonatomic,copy) NSString * category;                                   //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSURL * profilePictureURL;                           //@synthesize profilePictureURL=_profilePictureURL - In the implementation block
@property (nonatomic,retain) IGFacebookPageAddress * address;                     //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) IGFacebookPageCity * city;                           //@synthesize city=_city - In the implementation block
@property (nonatomic,retain) IGFacebookPageLocation * location;                   //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSArray * connectedInstagramAccountIDs;              //@synthesize connectedInstagramAccountIDs=_connectedInstagramAccountIDs - In the implementation block
@property (nonatomic,copy) NSString * accessToken;                                //@synthesize accessToken=_accessToken - In the implementation block
+(id)stringValueFromArrayForKey:(id)arg1 inDict:(id)arg2 ;
-(void)setPageName:(NSString *)arg1 ;
-(NSString *)publicEmail;
-(unsigned)contactPreference;
-(id)combinedPhoneNumber;
-(void)setPublicEmail:(NSString *)arg1 ;
-(void)setProfilePictureURL:(NSURL *)arg1 ;
-(void)setConnectedInstagramAccountIDs:(NSArray *)arg1 ;
-(void)setContactPreference:(unsigned)arg1 ;
-(id)combinedAddressString;
-(char)hasAtLeastOneContactInfo;
-(NSString *)pageName;
-(NSURL *)profilePictureURL;
-(NSArray *)connectedInstagramAccountIDs;
-(IGFacebookPageCity *)city;
-(id)initWithUser:(id)arg1 ;
-(IGFacebookPageAddress *)address;
-(id)initWithDictionary:(id)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IGFacebookPageLocation *)location;
-(IGFacebookPagePhoneNumber *)phoneNumber;
-(void)setLocation:(IGFacebookPageLocation *)arg1 ;
-(void)setAddress:(IGFacebookPageAddress *)arg1 ;
-(NSString *)accessToken;
-(void)setAccessToken:(NSString *)arg1 ;
-(void)setCity:(IGFacebookPageCity *)arg1 ;
-(void)setPhoneNumber:(IGFacebookPagePhoneNumber *)arg1 ;
-(void)setPageID:(NSString *)arg1 ;
-(NSString *)pageID;
@end

