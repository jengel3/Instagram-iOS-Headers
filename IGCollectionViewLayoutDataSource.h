/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:57 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGCollectionViewLayoutDataSource <NSObject>
@optional
-(CGPoint*)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2;

@required
-(void)collectionViewLayout:(id)arg1 prepareContext:(id)arg2 forObjects:(id)arg3;
-(int)numberOfSectionsForCollectionViewLayout:(id)arg1 withObjects:(id)arg2 context:(id)arg3;
-(int)collectionViewLayout:(id)arg1 numberOfItemsInSection:(int)arg2 withObjects:(id)arg3 context:(id)arg4;
-(CGSize*)collectionViewLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 withViewWidth:(float)arg3 withObjects:(id)arg4 context:(id)arg5;
-(id)collectionViewLayout:(id)arg1 changeSetFromObjects:(id)arg2 fromContext:(id)arg3 toObjects:(id)arg4 toContext:(id)arg5;

@end

