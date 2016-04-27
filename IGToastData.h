

@interface IGToastData : NSObject {

	unsigned _comments;
	unsigned _likes;
	unsigned _relationships;
	unsigned _userTags;
	unsigned _photosOfYou;

}

@property (assign,nonatomic) unsigned comments;                   //@synthesize comments=_comments - In the implementation block
@property (assign,nonatomic) unsigned likes;                      //@synthesize likes=_likes - In the implementation block
@property (assign,nonatomic) unsigned relationships;              //@synthesize relationships=_relationships - In the implementation block
@property (assign,nonatomic) unsigned userTags;                   //@synthesize userTags=_userTags - In the implementation block
@property (assign,nonatomic) unsigned photosOfYou;                //@synthesize photosOfYou=_photosOfYou - In the implementation block
+(id)randomTestData;
+(id)simpleTestData;
-(unsigned)photosOfYou;
-(char)isValidToShow;
-(void)setRelationships:(unsigned)arg1 ;
-(void)setPhotosOfYou:(unsigned)arg1 ;
-(unsigned)relationships;
-(void)setUserTags:(unsigned)arg1 ;
-(unsigned)userTags;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)likes;
-(void)setLikes:(unsigned)arg1 ;
-(void)setComments:(unsigned)arg1 ;
-(unsigned)comments;
@end

