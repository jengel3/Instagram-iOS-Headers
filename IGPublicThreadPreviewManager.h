

@class IGUser, IGUserDetailHeaderView, IGDirectThread;

@interface IGPublicThreadPreviewManager : NSObject {

	IGUser* _profileUser;
	IGUser* _currentUser;
	IGUserDetailHeaderView* _headerView;
	IGDirectThread* _publicThread;

}

@property (nonatomic,__weak,readonly) IGUser * profileUser;                             //@synthesize profileUser=_profileUser - In the implementation block
@property (nonatomic,__weak,readonly) IGUser * currentUser;                             //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,__weak,readonly) IGUserDetailHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) IGDirectThread * publicThread;                             //@synthesize publicThread=_publicThread - In the implementation block
-(IGUser *)profileUser;
-(void)renderPreviewForPublicThread:(id)arg1 ;
-(void)setPublicThread:(IGDirectThread *)arg1 ;
-(IGDirectThread *)publicThread;
-(char)isShowingCurrentUser;
-(id)initWithProfileUser:(id)arg1 currentUser:(id)arg2 headerView:(id)arg3 ;
-(void)fetchAndRenderPublicThreadPreviewIfNeeded;
-(void)presentPublicThreadVCFromNavigationVC:(id)arg1 ;
-(IGUserDetailHeaderView *)headerView;
-(IGUser *)currentUser;
@end

