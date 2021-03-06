
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@class IGFeedItem, NSIndexPath, NSString;

@interface IGFeedItemPreviewingHandler : NSObject <UIViewControllerPreviewingDelegate> {

	id _controller;
	IGFeedItem* _item;
	NSIndexPath* _itemIndexPath;
	unsigned _mediaIndex;

}

@property (nonatomic,__weak,readonly) id controller;                   //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) IGFeedItem * item;                        //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSIndexPath * itemIndexPath;              //@synthesize itemIndexPath=_itemIndexPath - In the implementation block
@property (assign,nonatomic) unsigned mediaIndex;                      //@synthesize mediaIndex=_mediaIndex - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMediaIndex:(unsigned)arg1 ;
-(unsigned)mediaIndex;
-(id)initWithController:(id)arg1 ;
-(NSIndexPath *)itemIndexPath;
-(void)setItemIndexPath:(NSIndexPath *)arg1 ;
-(IGFeedItem *)item;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)setItem:(IGFeedItem *)arg1 ;
-(id)controller;
@end

