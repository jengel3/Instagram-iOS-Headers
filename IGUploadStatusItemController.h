
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGMainFeedUploadCellContentViewDelegate.h>
#import <Instagram/IGListItemType.h>

@class IGMediaUploadManager, NSArray, NSString;

@interface IGUploadStatusItemController : IGListItemController <IGMainFeedUploadCellContentViewDelegate, IGListItemType> {

	IGMediaUploadManager* _uploadManager;
	NSArray* _uploads;

}

@property (nonatomic,readonly) IGMediaUploadManager * uploadManager;              //@synthesize uploadManager=_uploadManager - In the implementation block
@property (nonatomic,copy) NSArray * uploads;                                     //@synthesize uploads=_uploads - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(void)reloadUploads;
-(void)onUploadsUnarchived:(id)arg1 ;
-(void)onFeedItemShareStarted:(id)arg1 ;
-(void)onFeedItemPosted:(id)arg1 ;
-(void)onFeedItemFailedToUpload:(id)arg1 ;
-(IGMediaUploadManager *)uploadManager;
-(void)observeFeedItemChanges;
-(void)uploadCellWantsDeletion:(id)arg1 ;
-(void)dealloc;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(void)setUploads:(NSArray *)arg1 ;
-(NSArray *)uploads;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

