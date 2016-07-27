
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@protocol IGAlbumItemType, IGAlbumCarouselSelectionDelegate;
@class NSString;

@interface IGAlbumCarouselItemController : IGListItemController <IGListItemType> {

	char _selected;
	id<IGAlbumItemType> _item;
	id<IGAlbumCarouselSelectionDelegate> _delegate;

}

@property (nonatomic,readonly) id<IGAlbumItemType> item;                                        //@synthesize item=_item - In the implementation block
@property (assign,getter=isSelected,nonatomic) char selected;                                   //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCarouselSelectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(void)setDelegate:(id<IGAlbumCarouselSelectionDelegate>)arg1 ;
-(id<IGAlbumCarouselSelectionDelegate>)delegate;
-(id<IGAlbumItemType>)item;
-(char)isSelected;
-(void)setSelected:(char)arg1 ;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(UIEdgeInsets)inset;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

