

@class IGUser, NSArray, NSString;

@interface IGFeaturedUserInfo : NSObject {

	IGUser* _user;
	NSArray* _thumbnailURLs;
	NSString* _userDescription;
	NSString* _algorithm;
	NSString* _socialContext;
	NSString* _icon;
	NSArray* _mediaIDs;
	NSArray* _mediaBundles;
	int _socialContextType;

}

@property (nonatomic,retain) IGUser * user;                         //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) NSArray * thumbnailURLs;               //@synthesize thumbnailURLs=_thumbnailURLs - In the implementation block
@property (nonatomic,copy) NSString * userDescription;              //@synthesize userDescription=_userDescription - In the implementation block
@property (nonatomic,copy) NSString * algorithm;                    //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,copy) NSString * socialContext;                //@synthesize socialContext=_socialContext - In the implementation block
@property (nonatomic,copy) NSString * icon;                         //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSArray * mediaIDs;                    //@synthesize mediaIDs=_mediaIDs - In the implementation block
@property (nonatomic,retain) NSArray * mediaBundles;                //@synthesize mediaBundles=_mediaBundles - In the implementation block
@property (nonatomic,readonly) int socialContextType;               //@synthesize socialContextType=_socialContextType - In the implementation block
-(NSArray *)mediaBundles;
-(NSArray *)thumbnailURLs;
-(NSString *)socialContext;
-(void)setThumbnailURLs:(NSArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 maxThumbnailCount:(int)arg2 ;
-(void)setMediaIDs:(NSArray *)arg1 ;
-(void)setMediaBundles:(NSArray *)arg1 ;
-(int)socialContextType;
-(NSString *)userDescription;
-(NSArray *)mediaIDs;
-(void)setUserDescription:(NSString *)arg1 ;
-(void)setAlgorithm:(NSString *)arg1 ;
-(void)setSocialContext:(NSString *)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(NSString *)algorithm;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setIcon:(NSString *)arg1 ;
-(NSString *)icon;
@end

