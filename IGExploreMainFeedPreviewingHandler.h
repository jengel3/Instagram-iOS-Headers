/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:45 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@class IGExploreMainFeedViewController, NSIndexPath, IGMediaThumbnailModel, NSString;

@interface IGExploreMainFeedPreviewingHandler : NSObject <UIViewControllerPreviewingDelegate> {

	IGExploreMainFeedViewController* _controller;
	NSIndexPath* _thumbnailIndexPath;
	IGMediaThumbnailModel* _thumbnailModel;

}

@property (nonatomic,__weak,readonly) IGExploreMainFeedViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) NSIndexPath * thumbnailIndexPath;                                   //@synthesize thumbnailIndexPath=_thumbnailIndexPath - In the implementation block
@property (nonatomic,retain) IGMediaThumbnailModel * thumbnailModel;                             //@synthesize thumbnailModel=_thumbnailModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setThumbnailModel:(IGMediaThumbnailModel *)arg1 ;
-(void)setThumbnailIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)thumbnailIndexPath;
-(IGMediaThumbnailModel *)thumbnailModel;
-(id)initWithController:(id)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(IGExploreMainFeedViewController *)controller;
@end
