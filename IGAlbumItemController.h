
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGPendingAlbumItemStatusDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGAlbumItemControllerDelegate;
@class IGReelViewModel, NSArray, NSString;

@interface IGAlbumItemController : IGListItemController <IGPendingAlbumItemStatusDelegate, IGListItemType> {

	id<IGAlbumItemControllerDelegate> _delegate;
	IGReelViewModel* _model;
	NSArray* _uploadProgressObservers;

}

@property (nonatomic,copy) NSArray * uploadProgressObservers;                                //@synthesize uploadProgressObservers=_uploadProgressObservers - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumItemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGReelViewModel * model;                                      //@synthesize model=_model - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)hasFailedUpload;
-(void)setUploadProgressObservers:(NSArray *)arg1 ;
-(NSArray *)uploadProgressObservers;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(void)pendingItemObserver:(id)arg1 didUpdateToStatus:(int)arg2 ;
-(void)pendingItemObserver:(id)arg1 didUpdateToProgress:(float)arg2 ;
-(void)setDelegate:(id<IGAlbumItemControllerDelegate>)arg1 ;
-(id<IGAlbumItemControllerDelegate>)delegate;
-(IGReelViewModel *)model;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

