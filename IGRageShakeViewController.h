
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGCaptionCellDelegate.h>

@protocol IGRageShakeViewControllerDelegate;
@class IGCaptionCell, IGGroupedTableViewHeaderView, NSData, NSMutableDictionary, NSString;

@interface IGRageShakeViewController : IGViewController <IGCaptionCellDelegate> {

	IGCaptionCell* _captionCell;
	IGGroupedTableViewHeaderView* _headerLabel;
	int _reportType;
	NSData* _screenshotImageData;
	NSData* _windowDescriptionData;
	id<IGRageShakeViewControllerDelegate> _delegate;
	NSMutableDictionary* _attachments;

}

@property (nonatomic,retain) NSMutableDictionary * attachments;                                  //@synthesize attachments=_attachments - In the implementation block
@property (assign,nonatomic) int reportType;                                                     //@synthesize reportType=_reportType - In the implementation block
@property (nonatomic,copy) NSData * screenshotImageData;                                         //@synthesize screenshotImageData=_screenshotImageData - In the implementation block
@property (nonatomic,copy) NSData * windowDescriptionData;                                       //@synthesize windowDescriptionData=_windowDescriptionData - In the implementation block
@property (assign,nonatomic,__weak) id<IGRageShakeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)onCancelModal;
-(int)reportType;
-(void)sendReport;
-(void)addAttachmentWithString:(id)arg1 filename:(id)arg2 ;
-(id)tagIDForReportType;
-(id)subscriberIDs;
-(id)tagIDs;
-(NSData *)screenshotImageData;
-(NSData *)windowDescriptionData;
-(void)addActiveExperimentSettingsAttachments;
-(void)setReportType:(int)arg1 ;
-(void)setScreenshotImageData:(NSData *)arg1 ;
-(void)setWindowDescriptionData:(NSData *)arg1 ;
-(void)captionTextViewDidChange:(id)arg1 ;
-(char)captionCellMediaOverlayViewTapEnabled;
-(void)captionCellMediaOverlayViewTapped;
-(void)captionCellEditButtonTapped;
-(void)captionTextViewWillBeginEditing:(id)arg1 ;
-(void)captionTextViewDidBeginEditing:(id)arg1 ;
-(void)captionTextViewDidEndEditing:(id)arg1 text:(id)arg2 ;
-(char)captionTextView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)setDelegate:(id<IGRageShakeViewControllerDelegate>)arg1 ;
-(id)init;
-(id<IGRageShakeViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(NSMutableDictionary *)attachments;
-(void)setAttachments:(NSMutableDictionary *)arg1 ;
@end

