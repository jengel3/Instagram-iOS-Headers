
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol IGAlbumCarouselSelectionDelegate;
@class NSArray, IGListCollectionView, IGListAdapter, NSString;

@interface IGAlbumCarouselView : UIView <IGListAdapterDataSource, UIScrollViewDelegate> {

	char _isScrollingFromInteraction;
	NSArray* _items;
	id<IGAlbumCarouselSelectionDelegate> _selectionDelegate;
	IGListCollectionView* _collectionView;
	IGListAdapter* _adapter;

}

@property (nonatomic,readonly) IGListAdapter * adapter;                                                  //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,retain) NSArray * items;                                                            //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCarouselSelectionDelegate> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                                    //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) char isScrollingFromInteraction;                                          //@synthesize isScrollingFromInteraction=_isScrollingFromInteraction - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(char)isScrollingFromInteraction;
-(IGListAdapter *)adapter;
-(id<IGAlbumCarouselSelectionDelegate>)selectionDelegate;
-(void)setSelectionDelegate:(id<IGAlbumCarouselSelectionDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(IGListCollectionView *)collectionView;
@end

