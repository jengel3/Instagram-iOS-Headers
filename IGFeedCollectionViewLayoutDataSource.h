/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:45 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGCollectionViewLayoutDataSource.h>

@protocol IGCollectionViewControllerDataSource;
@class IGCollectionViewController, NSString;

@interface IGFeedCollectionViewLayoutDataSource : NSObject <IGCollectionViewLayoutDataSource> {

	id<IGCollectionViewControllerDataSource> _dataSource;
	IGCollectionViewController* _collectionViewController;

}

@property (nonatomic,__weak,readonly) id<IGCollectionViewControllerDataSource> dataSource;                //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,__weak,readonly) IGCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionViewLayout:(id)arg1 prepareContext:(id)arg2 forObjects:(id)arg3 ;
-(int)numberOfSectionsForCollectionViewLayout:(id)arg1 withObjects:(id)arg2 context:(id)arg3 ;
-(int)collectionViewLayout:(id)arg1 numberOfItemsInSection:(int)arg2 withObjects:(id)arg3 context:(id)arg4 ;
-(CGSize)collectionViewLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 withViewWidth:(float)arg3 withObjects:(id)arg4 context:(id)arg5 ;
-(id)collectionViewLayout:(id)arg1 changeSetFromObjects:(id)arg2 fromContext:(id)arg3 toObjects:(id)arg4 toContext:(id)arg5 ;
-(id)initWithDataSource:(id)arg1 collectionViewController:(id)arg2 ;
-(id<IGCollectionViewControllerDataSource>)dataSource;
-(IGCollectionViewController *)collectionViewController;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
@end
