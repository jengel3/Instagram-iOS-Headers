

@class NSString, NSArray;

@interface IGClusterData : NSObject {

	NSString* _title;
	int _moreCount;
	NSArray* _users;
	NSString* _clusterKey;
	NSString* _thumbnailURL;

}

@property (nonatomic,copy) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) int moreCount;                      //@synthesize moreCount=_moreCount - In the implementation block
@property (nonatomic,retain) NSArray * users;                    //@synthesize users=_users - In the implementation block
@property (nonatomic,copy) NSString * clusterKey;                //@synthesize clusterKey=_clusterKey - In the implementation block
@property (nonatomic,copy) NSString * thumbnailURL;              //@synthesize thumbnailURL=_thumbnailURL - In the implementation block
+(id)clusterDataForDictionary:(id)arg1 ;
-(NSString *)clusterKey;
-(void)setClusterKey:(NSString *)arg1 ;
-(int)moreCount;
-(void)setMoreCount:(int)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
-(void)setThumbnailURL:(NSString *)arg1 ;
-(NSString *)thumbnailURL;
@end

