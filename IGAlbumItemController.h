
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListDisplayDelegate.h>
#import <Instagram/IGListItemType.h>

@class IGAlbumFeedModel, IGAlbumItemFullscreenControllerPresenter, NSMutableDictionary, NSString;

@interface IGAlbumItemController : IGListItemController <IGListDisplayDelegate, IGListItemType> {

	IGAlbumFeedModel* _albumFeedModel;
	IGAlbumItemFullscreenControllerPresenter* _albumItemFullscreenControllerPresenter;
	NSMutableDictionary* _albumCellConfigMap;

}

@property (nonatomic,retain) IGAlbumFeedModel * albumFeedModel;                                                              //@synthesize albumFeedModel=_albumFeedModel - In the implementation block
@property (nonatomic,retain) IGAlbumItemFullscreenControllerPresenter * albumItemFullscreenControllerPresenter;              //@synthesize albumItemFullscreenControllerPresenter=_albumItemFullscreenControllerPresenter - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * albumCellConfigMap;                                                       //@synthesize albumCellConfigMap=_albumCellConfigMap - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)displayDelegate;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 ;
-(void)didUpdateToItem:(id)arg1 ;
-(id)supplementaryViewSource;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellClasses;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)listAdapter:(id)arg1 didScrollListItemController:(id)arg2 ;
-(IGAlbumItemFullscreenControllerPresenter *)albumItemFullscreenControllerPresenter;
-(id)initWithAlbumFeedModel:(id)arg1 presenter:(id)arg2 ;
-(void)updatePlayback:(char)arg1 ;
-(IGAlbumFeedModel *)albumFeedModel;
-(void)setAlbumFeedModel:(IGAlbumFeedModel *)arg1 ;
-(void)setAlbumItemFullscreenControllerPresenter:(IGAlbumItemFullscreenControllerPresenter *)arg1 ;
-(NSMutableDictionary *)albumCellConfigMap;
-(void)setAlbumCellConfigMap:(NSMutableDictionary *)arg1 ;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

