
#import <Instagram/IGPlainTableViewController.h>

@protocol IGSuggestedUsernamesViewControllerDelegate;
@class NSArray, NSString, UIView, UILabel;

@interface IGSuggestedUsernamesViewController : IGPlainTableViewController {

	id<IGSuggestedUsernamesViewControllerDelegate> _delegate;
	NSArray* _suggestions;
	NSString* _attemptedUsername;
	UIView* _tableHeader;
	UILabel* _infoLabel;

}

@property (assign,nonatomic,__weak) id<IGSuggestedUsernamesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * suggestions;                                                         //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,copy) NSString * attemptedUsername;                                                  //@synthesize attemptedUsername=_attemptedUsername - In the implementation block
@property (nonatomic,retain) UIView * tableHeader;                                                        //@synthesize tableHeader=_tableHeader - In the implementation block
@property (nonatomic,retain) UILabel * infoLabel;                                                         //@synthesize infoLabel=_infoLabel - In the implementation block
-(void)onCancel;
-(void)setAttemptedUsername:(NSString *)arg1 ;
-(NSString *)attemptedUsername;
-(id)attributedHeaderText;
-(UIView *)tableHeader;
-(id)initWithSuggestions:(id)arg1 andAttemptedUsername:(id)arg2 ;
-(void)setTableHeader:(UIView *)arg1 ;
-(void)setDelegate:(id<IGSuggestedUsernamesViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGSuggestedUsernamesViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setSuggestions:(NSArray *)arg1 ;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(NSArray *)suggestions;
-(UILabel *)infoLabel;
@end

