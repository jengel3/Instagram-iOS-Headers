

@class IGMediaRequestController, UICollectionView, IGUser;

@interface IGPublicThreadCellFactory : NSObject {

	IGMediaRequestController* _mediaRequestController;
	UICollectionView* _collectionView;
	IGUser* _cellViewer;

}

@property (nonatomic,__weak,readonly) IGMediaRequestController * mediaRequestController;              //@synthesize mediaRequestController=_mediaRequestController - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * collectionView;                                //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGUser * cellViewer;                                                     //@synthesize cellViewer=_cellViewer - In the implementation block
+(char)shouldHideProfilePictureForIndexPath:(id)arg1 withContents:(id)arg2 cellViewer:(id)arg3 ;
-(IGMediaRequestController *)mediaRequestController;
-(id)initWithCollectionView:(id)arg1 cellViewer:(id)arg2 mediaRequestController:(id)arg3 ;
-(id)cellForContents:(id)arg1 indexPath:(id)arg2 cellDelegate:(id)arg3 ;
-(id)transitionViewCellAtIndexPath:(id)arg1 withThread:(id)arg2 ;
-(id)typingCellAtIndexPath:(id)arg1 ;
-(void)registerClassesForCollectionView:(id)arg1 ;
-(IGUser *)cellViewer;
-(void)setCellViewer:(IGUser *)arg1 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

