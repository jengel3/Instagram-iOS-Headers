

#import <Instagram/Instagram-Structs.h>
@class UICollectionView, UIView;

@interface IGCollectionViewVisibility : NSObject {

	UICollectionView* _collectionView;
	UIView* _navigationbar;
	UIView* _tabBar;

}

@property (nonatomic,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UIView * navigationbar;                         //@synthesize navigationbar=_navigationbar - In the implementation block
@property (nonatomic,readonly) UIView * tabBar;                                //@synthesize tabBar=_tabBar - In the implementation block
-(id)initWithCollectionView:(id)arg1 navigationBar:(id)arg2 tabBar:(id)arg3 ;
-(id)mostVisibleCellFromCells:(id)arg1 visibleContentRect:(CGRect)arg2 ;
-(UIView *)navigationbar;
-(NSRange)visibleSectionRange;
-(UICollectionView *)collectionView;
-(UIView *)tabBar;
-(CGRect)visibleContentRect;
@end

