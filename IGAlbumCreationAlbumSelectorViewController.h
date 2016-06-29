
#import <UIKit/UIViewController.h>
#import <Instagram/IGAlbumCreationAlbumSelectorCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol IGAlbumCreationAlbumSelectorViewControllerDelegate;
@class UITableView, UIControl, UIView, NSMutableArray, NSString;

@interface IGAlbumCreationAlbumSelectorViewController : UIViewController <IGAlbumCreationAlbumSelectorCellDelegate, UITableViewDataSource, UITableViewDelegate> {

	char _isOpen;
	id<IGAlbumCreationAlbumSelectorViewControllerDelegate> _delegate;
	UITableView* _tableView;
	UIControl* _clippingView;
	UIView* _grayOverlayView;
	NSMutableArray* _albumModels;

}

@property (nonatomic,retain) UITableView * tableView;                                                             //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIControl * clippingView;                                                            //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,retain) UIView * grayOverlayView;                                                            //@synthesize grayOverlayView=_grayOverlayView - In the implementation block
@property (nonatomic,retain) NSMutableArray * albumModels;                                                        //@synthesize albumModels=_albumModels - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCreationAlbumSelectorViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char isOpen;                                                                         //@synthesize isOpen=_isOpen - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)albumSelectorCellDidTapInfoButton:(id)arg1 ;
-(NSMutableArray *)albumModels;
-(void)setGrayOverlayView:(UIView *)arg1 ;
-(UIView *)grayOverlayView;
-(void)setClippingView:(UIControl *)arg1 ;
-(UIControl *)clippingView;
-(void)backgroundViewTapped;
-(void)updateTabBarEntryFrame;
-(int)numTabBarItems;
-(void)setAlbumModels:(NSMutableArray *)arg1 ;
-(void)setIsOpen:(char)arg1 ;
-(void)setDelegate:(id<IGAlbumCreationAlbumSelectorViewControllerDelegate>)arg1 ;
-(void)reloadData;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGAlbumCreationAlbumSelectorViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewDidLoad;
-(char)isOpen;
@end

