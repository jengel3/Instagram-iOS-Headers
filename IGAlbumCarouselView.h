
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGListAdapterDataSource.h>

@protocol IGAlbumItemType, IGAlbumCarouselSelectionDelegate;
@class NSArray, UICollectionViewFlowLayout, IGListCollectionView, IGListAdapter, NSString;

@interface IGAlbumCarouselView : UIView <IGListAdapterDataSource> {

	NSArray* _items;
	id<IGAlbumItemType> _selectedItem;
	id<IGAlbumCarouselSelectionDelegate> _selectionDelegate;
	UICollectionViewFlowLayout* _layout;
	IGListCollectionView* _collectionView;
	IGListAdapter* _adapter;

}

@property (nonatomic,readonly) UICollectionViewFlowLayout * layout;                                      //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                                    //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGListAdapter * adapter;                                                  //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,retain) NSArray * items;                                                            //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) id<IGAlbumItemType> selectedItem;                                           //@synthesize selectedItem=_selectedItem - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCarouselSelectionDelegate> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(IGListAdapter *)adapter;
-(id<IGAlbumCarouselSelectionDelegate>)selectionDelegate;
-(void)setSelectionDelegate:(id<IGAlbumCarouselSelectionDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(UICollectionViewFlowLayout *)layout;
-(IGListCollectionView *)collectionView;
-(void)setSelectedItem:(id<IGAlbumItemType>)arg1 ;
-(id<IGAlbumItemType>)selectedItem;
@end

