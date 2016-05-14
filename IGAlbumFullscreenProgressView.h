/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface IGAlbumFullscreenProgressView : UIView {

	unsigned _numberOfSegments;
	NSMutableArray* _segmentViews;

}

@property (nonatomic,retain) NSMutableArray * segmentViews;              //@synthesize segmentViews=_segmentViews - In the implementation block
@property (assign,nonatomic) unsigned numberOfSegments;                  //@synthesize numberOfSegments=_numberOfSegments - In the implementation block
-(void)setProgress:(float)arg1 forSegmentAtIndex:(unsigned)arg2 ;
-(void)setProgress:(float)arg1 forSegmentsAtIndexes:(id)arg2 ;
-(NSMutableArray *)segmentViews;
-(void)setSegmentViews:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned)numberOfSegments;
-(void)setNumberOfSegments:(unsigned)arg1 ;
@end
