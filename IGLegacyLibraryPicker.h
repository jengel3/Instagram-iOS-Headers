/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:47 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Instagram/IGCropperViewControllerDelegate.h>

@class NSString;

@interface IGLegacyLibraryPicker : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, IGCropperViewControllerDelegate> {

	char _dismissAnimated;
	char _isCircularCropMode;
	int _minimumImageSize;
	int _mediaType;
	/*^block*/id _mediaCompletionHandler;
	/*^block*/id _videoCompletionHandler;

}

@property (assign,nonatomic) int minimumImageSize;                  //@synthesize minimumImageSize=_minimumImageSize - In the implementation block
@property (assign,nonatomic) int mediaType;                         //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) char dismissAnimated;                  //@synthesize dismissAnimated=_dismissAnimated - In the implementation block
@property (assign,nonatomic) char isCircularCropMode;               //@synthesize isCircularCropMode=_isCircularCropMode - In the implementation block
@property (nonatomic,copy) id mediaCompletionHandler;               //@synthesize mediaCompletionHandler=_mediaCompletionHandler - In the implementation block
@property (nonatomic,copy) id videoCompletionHandler;               //@synthesize videoCompletionHandler=_videoCompletionHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)pickMediaOfType:(int)arg1 minimumSize:(int)arg2 withViewController:(id)arg3 animated:(char)arg4 circularCropMode:(char)arg5 completionHandler:(/*^block*/id)arg6 ;
+(int)statusBarStyle;
-(void)cropperViewControllerDidFinish:(id)arg1 ;
-(int)minimumImageSize;
-(void)setMinimumImageSize:(int)arg1 ;
-(void)setMediaCompletionHandler:(id)arg1 ;
-(void)setDismissAnimated:(char)arg1 ;
-(void)setIsCircularCropMode:(char)arg1 ;
-(char)isCircularCropMode;
-(id)videoCompletionHandler;
-(void)setVideoCompletionHandler:(id)arg1 ;
-(id)mediaCompletionHandler;
-(char)dismissAnimated;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
@end

