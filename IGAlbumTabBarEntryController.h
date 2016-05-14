/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Instagram/IGAlbumTabBarEntryViewDataSource.h>
#import <Instagram/IGAlbumTabBarEntryViewDelegate.h>

@protocol IGAlbumTabBarEntryControllerDelegate, IGAlbumTabBarEntryControllerDataSource;
@class IGAlbumTabBarEntryView, UIControl, UIView, NSString;

@interface IGAlbumTabBarEntryController : UIViewController <IGAlbumTabBarEntryViewDataSource, IGAlbumTabBarEntryViewDelegate> {

	char _isOpen;
	id<IGAlbumTabBarEntryControllerDelegate> _delegate;
	id<IGAlbumTabBarEntryControllerDataSource> _dataSource;
	IGAlbumTabBarEntryView* _tabBarEntryView;
	UIControl* _clippingView;
	UIView* _grayOverlayView;

}

@property (assign,nonatomic,__weak) id<IGAlbumTabBarEntryControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) IGAlbumTabBarEntryView * tabBarEntryView;                                  //@synthesize tabBarEntryView=_tabBarEntryView - In the implementation block
@property (nonatomic,retain) UIControl * clippingView;                                                  //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,retain) UIView * grayOverlayView;                                                  //@synthesize grayOverlayView=_grayOverlayView - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumTabBarEntryControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char isOpen;                                                               //@synthesize isOpen=_isOpen - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setGrayOverlayView:(UIView *)arg1 ;
-(UIView *)grayOverlayView;
-(void)setClippingView:(UIControl *)arg1 ;
-(UIControl *)clippingView;
-(void)backgroundViewTapped;
-(void)setTabBarEntryView:(IGAlbumTabBarEntryView *)arg1 ;
-(IGAlbumTabBarEntryView *)tabBarEntryView;
-(void)updateTabBarEntryFrame;
-(int)numTabBarItems;
-(int)numberOfItemsInTabBarEntryView:(id)arg1 ;
-(id)tabBarEntryView:(id)arg1 entryItemForIndex:(int)arg2 ;
-(void)tabBarEntryView:(id)arg1 didSelectItemAtIndex:(int)arg2 ;
-(id)initWithCreationManager:(id)arg1 dataSource:(id)arg2 ;
-(void)setIsOpen:(char)arg1 ;
-(void)setDataSource:(id<IGAlbumTabBarEntryControllerDataSource>)arg1 ;
-(void)setDelegate:(id<IGAlbumTabBarEntryControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGAlbumTabBarEntryControllerDataSource>)dataSource;
-(id<IGAlbumTabBarEntryControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(char)isOpen;
@end
