

@class UICollectionView, IGUser;

@interface IGPublicThreadCellFactory : NSObject {

	UICollectionView* _collectionView;
	IGUser* _cellViewer;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGUser * cellViewer;                                   //@synthesize cellViewer=_cellViewer - In the implementation block
+(char)shouldHideProfilePictureForIndexPath:(id)arg1 withContents:(id)arg2 cellViewer:(id)arg3 ;
-(void)registerClassesForCollectionView:(id)arg1 ;
-(IGUser *)cellViewer;
-(id)initWithCollectionView:(id)arg1 cellViewer:(id)arg2 ;
-(id)transitionViewCellAtIndexPath:(id)arg1 withThread:(id)arg2 ;
-(id)cellForContents:(id)arg1 indexPath:(id)arg2 cellDelegate:(id)arg3 ;
-(void)setCellViewer:(IGUser *)arg1 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

