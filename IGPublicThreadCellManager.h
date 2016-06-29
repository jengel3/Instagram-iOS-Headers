

@class UICollectionView, UINavigationController;

@interface IGPublicThreadCellManager : NSObject {

	UICollectionView* _collectionView;
	UINavigationController* _presenter;

}

@property (nonatomic,retain) UICollectionView * collectionView;               //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UINavigationController * presenter;              //@synthesize presenter=_presenter - In the implementation block
-(id)initWithCollectionView:(id)arg1 viewPresenter:(id)arg2 ;
-(void)selectCellContent:(id)arg1 atIndexPath:(id)arg2 fromOwnerThread:(char)arg3 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UINavigationController *)presenter;
-(void)setPresenter:(UINavigationController *)arg1 ;
@end

