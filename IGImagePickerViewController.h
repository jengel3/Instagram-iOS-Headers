/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:01 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGAssetPickerViewControllerDelegate.h>
#import <Instagram/IGAlbumPickerViewControllerDelegate.h>
#import <Instagram/IGScrollViewController.h>

@protocol IGImagePickerViewControllerDelegate, IGScrollViewDelegate, IGScrollViewController;
@class NSURL, IGAlbumPickerViewController, IGAssetPickerViewController, UIViewController, IGLibraryAsset, NSString, UIScrollView;

@interface IGImagePickerViewController : UIViewController <IGAssetPickerViewControllerDelegate, IGAlbumPickerViewControllerDelegate, IGScrollViewController> {

	int _assetType;
	id<IGImagePickerViewControllerDelegate> _pickerDelegate;
	id<IGScrollViewDelegate> _scrollDelegate;
	NSURL* _defaultAssetURL;
	IGAlbumPickerViewController* _albumPickerViewController;
	IGAssetPickerViewController* _assetPickerViewController;
	UIViewController*<IGScrollViewController> _selectedViewController;

}

@property (assign,nonatomic) int assetType;                                                                        //@synthesize assetType=_assetType - In the implementation block
@property (assign,nonatomic,__weak) id<IGImagePickerViewControllerDelegate> pickerDelegate;                        //@synthesize pickerDelegate=_pickerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGScrollViewDelegate> scrollDelegate;                                       //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
@property (nonatomic,readonly) IGLibraryAsset * chosenAsset; 
@property (nonatomic,readonly) char isChoosingAlbum; 
@property (nonatomic,readonly) float startingContentOffsetY; 
@property (assign,nonatomic) CGSize contentSize; 
@property (assign,nonatomic) CGPoint contentOffset; 
@property (assign,nonatomic) float topContentInset; 
@property (nonatomic,readonly) CGRect frameForSelectedThumbnail; 
@property (nonatomic,retain) NSURL * defaultAssetURL;                                                              //@synthesize defaultAssetURL=_defaultAssetURL - In the implementation block
@property (nonatomic,retain) IGAlbumPickerViewController * albumPickerViewController;                              //@synthesize albumPickerViewController=_albumPickerViewController - In the implementation block
@property (nonatomic,retain) IGAssetPickerViewController * assetPickerViewController;                              //@synthesize assetPickerViewController=_assetPickerViewController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<IGScrollViewController> selectedViewController;              //@synthesize selectedViewController=_selectedViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
-(void)albumPickerViewController:(id)arg1 didSelectAlbum:(id)arg2 ;
-(id<IGScrollViewDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id<IGScrollViewDelegate>)arg1 ;
-(NSURL *)defaultAssetURL;
-(void)assetPickerViewControllerDidDismiss:(id)arg1 ;
-(IGLibraryAsset *)chosenAsset;
-(void)assetPickerViewControllerDidBecomeEmpty:(id)arg1 ;
-(void)assetPickerViewController:(id)arg1 didSelectAsset:(id)arg2 viaTap:(char)arg3 ;
-(CGRect)frameForSelectedThumbnail;
-(void)setDefaultAssetURL:(NSURL *)arg1 ;
-(void)setUpPicker;
-(IGAlbumPickerViewController *)albumPickerViewController;
-(IGAssetPickerViewController *)assetPickerViewController;
-(void)showAlbums:(char)arg1 animated:(char)arg2 ;
-(float)startingContentOffsetY;
-(char)isChoosingAlbum;
-(void)setAlbumPickerViewController:(IGAlbumPickerViewController *)arg1 ;
-(void)setAssetPickerViewController:(IGAssetPickerViewController *)arg1 ;
-(id<IGImagePickerViewControllerDelegate>)pickerDelegate;
-(void)setPickerDelegate:(id<IGImagePickerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(CGPoint)contentOffset;
-(CGSize)contentSize;
-(void)setContentOffset:(CGPoint)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)viewDidLoad;
-(UIScrollView *)scrollView;
-(UIViewController*<IGScrollViewController>)selectedViewController;
-(void)setSelectedViewController:(UIViewController*<IGScrollViewController>)arg1 ;
-(id)initWithAssetType:(int)arg1 ;
-(void)setAssetType:(int)arg1 ;
-(void)setTopContentInset:(float)arg1 ;
-(float)topContentInset;
-(int)assetType;
@end

