
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol IGAlbumTabBarEntryViewDataSource, IGAlbumTabBarEntryViewDelegate;
@class UITableView, NSString;

@interface IGAlbumTabBarEntryView : UIView <UITableViewDataSource, UITableViewDelegate> {

	id<IGAlbumTabBarEntryViewDataSource> _dataSource;
	id<IGAlbumTabBarEntryViewDelegate> _delegate;
	UITableView* _tableView;

}

@property (nonatomic,readonly) UITableView * tableView;                                           //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumTabBarEntryViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumTabBarEntryViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)heightForItemCount:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id<IGAlbumTabBarEntryViewDataSource>)arg1 ;
-(void)setDelegate:(id<IGAlbumTabBarEntryViewDelegate>)arg1 ;
-(void)reloadData;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGAlbumTabBarEntryViewDataSource>)dataSource;
-(id<IGAlbumTabBarEntryViewDelegate>)delegate;
-(UITableView *)tableView;
@end

