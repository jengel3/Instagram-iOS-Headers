

@class NSString, IGUserPublicLocation;

@interface IGFacebookPageInfo : NSObject {

	NSString* _pageID;
	NSString* _publicEmail;
	NSString* _phoneNumber;
	NSString* _category;
	IGUserPublicLocation* _location;

}

@property (nonatomic,copy) NSString * pageID;                              //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,copy) NSString * publicEmail;                         //@synthesize publicEmail=_publicEmail - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                         //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * category;                            //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) IGUserPublicLocation * location;              //@synthesize location=_location - In the implementation block
+(id)emailStringFromPageInfo:(id)arg1 ;
-(NSString *)publicEmail;
-(id)toDictForUpdate;
-(void)setPublicEmail:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(IGUserPublicLocation *)location;
-(NSString *)phoneNumber;
-(void)setLocation:(IGUserPublicLocation *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setPageID:(NSString *)arg1 ;
-(NSString *)pageID;
@end

