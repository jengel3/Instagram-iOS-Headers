
#import <Instagram/IGImageViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol IGSwitchUsersControllerDelegate;
@class UITableView, NSArray, NSString;

@interface IGSwitchUsersController : NSObject <IGImageViewDelegate, UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	id<IGSwitchUsersControllerDelegate> _delegate;
	NSArray* _usersArray;
	unsigned _switchUsersMode;

}

@property (nonatomic,retain) UITableView * tableView;                                          //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<IGSwitchUsersControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * usersArray;                                             //@synthesize usersArray=_usersArray - In the implementation block
@property (assign,nonatomic) unsigned switchUsersMode;                                         //@synthesize switchUsersMode=_switchUsersMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)imageViewLoadedImage:(id)arg1 ;
-(id)initWithSwitchUsersMode:(unsigned)arg1 ;
-(float)minimumTableViewHeight;
-(void)updateUserData;
-(void)setUsersArray:(NSArray *)arg1 ;
-(unsigned)switchUsersMode;
-(NSArray *)usersArray;
-(id)currentUserCellForTableView:(id)arg1 ;
-(id)userCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)addAccountCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)setSwitchUsersMode:(unsigned)arg1 ;
-(void)setDelegate:(id<IGSwitchUsersControllerDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<IGSwitchUsersControllerDelegate>)delegate;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
@end

