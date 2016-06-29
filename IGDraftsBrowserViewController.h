
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol IGDraftsBrowserViewControllerDelegate;
@class IGUserSession, UITableView, UIActivityIndicatorView, NSMutableArray, NSString;

@interface IGDraftsBrowserViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	id<IGDraftsBrowserViewControllerDelegate> _delegate;
	IGUserSession* _userSession;
	UITableView* _tableView;
	UIActivityIndicatorView* _activityIndicator;
	NSMutableArray* _drafts;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                          //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                            //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) NSMutableArray * drafts;                                                //@synthesize drafts=_drafts - In the implementation block
@property (assign,nonatomic,__weak) id<IGDraftsBrowserViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 ;
-(void)setDrafts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)drafts;
-(void)dismissButtonTapped;
-(void)setDelegate:(id<IGDraftsBrowserViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<IGDraftsBrowserViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewDidLoad;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(IGUserSession *)userSession;
-(void)loadData;
@end

