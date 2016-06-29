
#import <Instagram/IGAlbumFullscreenViewControllerDelegate.h>

@class IGAlbumItemController, NSMapTable, NSString;

@interface IGAlbumItemFullscreenControllerPresenter : NSObject <IGAlbumFullscreenViewControllerDelegate> {

	IGAlbumItemController* _currentItemController;
	NSMapTable* _itemControllerToFullscreenViewControllerMap;

}

@property (nonatomic,retain) NSMapTable * itemControllerToFullscreenViewControllerMap;              //@synthesize itemControllerToFullscreenViewControllerMap=_itemControllerToFullscreenViewControllerMap - In the implementation block
@property (nonatomic,retain) IGAlbumItemController * currentItemController;                         //@synthesize currentItemController=_currentItemController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)albumFullscreenViewControllerShouldDismiss:(id)arg1 ;
-(void)presentAlbumFullscreenForItemController:(id)arg1 withAlbumFocusCoordinator:(id)arg2 ;
-(NSMapTable *)itemControllerToFullscreenViewControllerMap;
-(IGAlbumItemController *)currentItemController;
-(void)setCurrentItemController:(IGAlbumItemController *)arg1 ;
-(void)setItemControllerToFullscreenViewControllerMap:(NSMapTable *)arg1 ;
-(id)init;
@end

