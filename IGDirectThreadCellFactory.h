

@class UICollectionView, IGUser;

@interface IGDirectThreadCellFactory : NSObject {

	UICollectionView* _collectionView;
	IGUser* _cellViewer;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGUser * cellViewer;                                   //@synthesize cellViewer=_cellViewer - In the implementation block
+(char)shouldHideProfilePictureForIndexPath:(id)arg1 withContents:(id)arg2 cellViewer:(id)arg3 ;
-(id)initWithCollectionView:(id)arg1 cellViewer:(id)arg2 ;
-(void)registerClassesForCollectionView:(id)arg1 ;
-(IGUser *)cellViewer;
-(id)cellForContents:(id)arg1 indexPath:(id)arg2 cellDelegate:(id)arg3 expanded:(char)arg4 thread:(id)arg5 ;
-(void)setCellViewer:(IGUser *)arg1 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

