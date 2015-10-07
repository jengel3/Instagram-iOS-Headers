/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:05 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, NSURL;

@interface IGExploreCarouselViewModel : NSObject {

	char _topImageVideoIconVisible;
	NSString* _title;
	NSArray* _imageURLs;
	NSArray* _videoIconsVisible;
	NSURL* _topImageURL;

}

@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * imageURLs;                            //@synthesize imageURLs=_imageURLs - In the implementation block
@property (nonatomic,copy) NSArray * videoIconsVisible;                    //@synthesize videoIconsVisible=_videoIconsVisible - In the implementation block
@property (nonatomic,readonly) NSURL * topImageURL;                        //@synthesize topImageURL=_topImageURL - In the implementation block
@property (nonatomic,readonly) char topImageVideoIconVisible;              //@synthesize topImageVideoIconVisible=_topImageVideoIconVisible - In the implementation block
-(void)setImageURLs:(NSArray *)arg1 ;
-(NSArray *)videoIconsVisible;
-(void)setVideoIconsVisible:(NSArray *)arg1 ;
-(NSURL *)topImageURL;
-(char)topImageVideoIconVisible;
-(NSArray *)imageURLs;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

