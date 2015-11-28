
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGCoreTextLinkHandler.h>

@class IGFeedItem, UIViewController, UIView, NSString;

@interface IGUsertagActionsViewController : IGGroupedTableViewController <IGCoreTextLinkHandler> {

	char _isChangingPhotosOfYouSetting;
	char _isRemovingUsertag;
	char _isExpanded;
	IGFeedItem* _feedItem;
	UIViewController* _controller;
	UIView* _footerView;

}

@property (nonatomic,retain) IGFeedItem * feedItem;                             //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) UIView * footerView;                               //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) char isChangingPhotosOfYouSetting;                 //@synthesize isChangingPhotosOfYouSetting=_isChangingPhotosOfYouSetting - In the implementation block
@property (assign,nonatomic) char isRemovingUsertag;                            //@synthesize isRemovingUsertag=_isRemovingUsertag - In the implementation block
@property (assign,nonatomic) char isExpanded;                                   //@synthesize isExpanded=_isExpanded - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(char)isChangingPhotosOfYouSetting;
-(char)isRemovingUsertag;
-(id)tableView:(id)arg1 photosOfYouCellForRow:(int)arg2 ;
-(id)tableView:(id)arg1 removeCellForRow:(int)arg2 ;
-(id)tableView:(id)arg1 moreOptionsCellForRow:(int)arg2 ;
-(void)setIsChangingPhotosOfYouSetting:(char)arg1 ;
-(void)removeUsertag;
-(void)tableView:(id)arg1 didSelectPhotosOfMeRow:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRemoveRow:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectMoreOptionsRow:(int)arg2 ;
-(void)setIsRemovingUsertag:(char)arg1 ;
-(id)init;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)isExpanded;
-(void)setIsExpanded:(char)arg1 ;
-(void)dismiss;
-(UIViewController *)controller;
-(void)setController:(UIViewController *)arg1 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
@end

