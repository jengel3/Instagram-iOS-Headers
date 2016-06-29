

@class NSSet;

@interface IGSocialSectionHeaderBuilder : NSObject {

	float _superviewWidth;
	NSSet* _socialPosts;

}

@property (assign,nonatomic) float superviewWidth;               //@synthesize superviewWidth=_superviewWidth - In the implementation block
@property (nonatomic,readonly) NSSet * socialPosts;              //@synthesize socialPosts=_socialPosts - In the implementation block
-(float)superviewWidth;
-(void)configurePeopleYouFollowView:(id)arg1 withFeedItem:(id)arg2 ;
-(void)setSuperviewWidth:(float)arg1 ;
-(NSSet *)socialPosts;
-(id)initWithSuperviewWidth:(float)arg1 socialPosts:(id)arg2 ;
-(id)buildSocialSectionHeader;
@end

