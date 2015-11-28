
#import <Instagram/IGViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Instagram/IGMediaRequestDelegate.h>

@class UITableView, NSArray, NSDictionary, UIImage, NSString;

@interface IGAnalyticsViewController : IGViewController <UITableViewDelegate, UITableViewDataSource, IGMediaRequestDelegate> {

	UITableView* _tableView;
	NSArray* _logLines;
	NSDictionary* _displayedEvent;
	UIImage* _solidGreenImage;
	UIImage* _solidGreenImageRounded;
	unsigned _type;

}

@property (nonatomic,readonly) unsigned type;                       //@synthesize type=_type - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3 ;
-(id)initWithLogDicts:(id)arg1 type:(unsigned)arg2 ;
-(id)_imageWithColor:(id)arg1 ;
-(void)clearAnalyticsEventsTapped:(id)arg1 ;
-(void)_onHideTap:(id)arg1 ;
-(void)_updateCell:(id)arg1 withEventDict:(id)arg2 ;
-(void)_linkToUserCell:(id)arg1 withEventDict:(id)arg2 pk:(id)arg3 ;
-(void)_linkToMediaCell:(id)arg1 withEventDict:(id)arg2 ;
-(void)configureForRaindropWithDict:(id)arg1 cell:(id)arg2 ;
-(void)configureForAnalyticsEventWithDict:(id)arg1 cell:(id)arg2 ;
-(id)initWithLogDicts:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(unsigned)type;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)viewDidLoad;
@end

